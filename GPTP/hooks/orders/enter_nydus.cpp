#include "enter_nydus.h"
#include <SCBW/api.h>

//helper functions def

namespace {

	u32 getUnitMovableState(CUnit* unit);					//0x00401DC0
	void orderComputer_cl(CUnit* unit, u8 orderId); 		//0x00475310
	bool orderToMoveToTarget(CUnit *unit, CUnit *target);	//0x004EB980

	///   Checks whether the @p resource unit can be harvested by \p playerId.
	bool canBeHarvestedBy(const CUnit* resource, u8 playerId) {
	  using units_dat::BaseProperty;

	  if (resource != NULL
	      && BaseProperty[resource->id] & UnitProperty::ResourceContainer) {

	    //Mineral fields can be harvested by anyone
	    if (UnitId::ResourceMineralField <= resource->id
	        && resource->id <= UnitId::ResourceMineralFieldType3)
	      return true;

	    //Gas buildings can only be harvested if it is owned by the current player
	    if (resource->status & UnitStatus::Completed
	        && resource->playerId == playerId)
	      return true;
	  }

	  return false;
	}

	//KYSXD herlper
	void manageRally(CUnit *unit, CUnit *factory) {
	  using units_dat::BaseProperty;
	  //Do nothing if the rally target is the factory itself or the rally target position is 0
	  if (factory->rally.unit == factory || !(factory->rally.pt.x)) return;

	  //If unit is a worker and the factory has a worker rally set, use it.
	  if (BaseProperty[unit->id] & UnitProperty::Worker
	      && canBeHarvestedBy(factory->moveTarget.unit, unit->playerId)){
	      unit->orderTo(OrderId::Harvest1, factory->moveTarget.unit);
	      return;
	  }

	  //Enter to bunkers/transports
	  if (factory->rally.unit && scbw::canBeEnteredBy(factory->rally.unit, unit)) {
	    unit->orderTo(OrderId::EnterTransport, factory->rally.unit);
	    return;
	  }

	  //Following should be allowed only on friendly units
	  if (factory->rally.unit && factory->rally.unit->playerId == unit->playerId)
	    unit->orderTo(OrderId::Follow, factory->rally.unit);
	  else
	    unit->orderTo(OrderId::Move, factory->rally.pt.x, factory->rally.pt.y);

	  return; 
	}


} //unnamed namespace

namespace hooks {

	//Originally known as sub_4E8C20.
	//Necessary to assign enterNydusCanal order to units that
	//normally can't use it (without changing this here,
	//changing identical tests in order function is useless
	//since the unit won't even use that function)
	bool canEnterNydusCanal(CUnit* unit, CUnit* nydusCanal) {

		bool bReturnValue;
		const CUnit* const nydusExit = nydusCanal->building.nydusExit;

		bReturnValue =
			(nydusCanal->status & UnitStatus::Completed) &&
			nydusExit != NULL &&
			(nydusExit->status & UnitStatus::Completed) &&
			unit->playerId == nydusCanal->playerId &&
			!(unit->status & UnitStatus::InAir) &&
			unit->getRace() == RaceId::Zerg;

		return bReturnValue;

	} //bool canEnterNydusCanal(CUnit* unit, CUnit* nydusCanal)

	;

	//Originally known as sub_4EA180.
	//Perform the Nydus Canal teleport effect on an
	//unit that validated the conditions within the
	//orders_EnterNydusCanal function
	void enterNydusCanal_Effect(CUnit* unit, CUnit* nydusCanal) {

		Point16 oldPos,aimedPos,finalPos;

		oldPos.x = unit->sprite->position.x;
		oldPos.y = unit->sprite->position.y;
		aimedPos.x = (nydusCanal->building.nydusExit)->sprite->position.x;
		aimedPos.y = (nydusCanal->building.nydusExit)->sprite->position.y;

		scbw::prepareUnitMove(unit,true);
		scbw::setUnitPosition(unit,aimedPos.x,aimedPos.y);

		if(scbw::checkUnitCollisionPos(unit,&aimedPos,&finalPos,NULL,false,0)) { //EA201

			scbw::playSound(SoundId::Misc_IntoNydus_wav,nydusCanal);

			scbw::setUnitPosition(unit,finalPos.x,finalPos.y);
			scbw::refreshUnitAfterMove(unit);

			scbw::playSound(SoundId::Misc_IntoNydus_wav,nydusCanal->building.nydusExit);

			if(unit->orderQueueHead != NULL) {
				unit->userActionFlags |= 1;
				prepareForNextOrder(unit);
			}
			else { //EA253

				if(unit->pAI != NULL)
					orderComputer_cl(unit,OrderId::ComputerAI);
				else
					orderComputer_cl(unit,units_dat::ReturnToIdleOrder[unit->id]);

			}

			manageRally(unit, nydusCanal->building.nydusExit);
		}
		else {	//collision detected, restore old position
			scbw::setUnitPosition(unit,oldPos.x,oldPos.y);
			scbw::refreshUnitAfterMove(unit);
		}

	} //void enterNydusCanal_Effect(CUnit* unit, CUnit* nydusCanal)

	;

	void orders_EnterNydusCanal(CUnit* unit) {

		CUnit* nydusCanal;

		nydusCanal = unit->orderTarget.unit;

		if( /*same tests as canEnterNydusCanal but left hardcoded like the original code*/
			nydusCanal == NULL || 
			!(nydusCanal->status & UnitStatus::Completed) ||
			nydusCanal->building.nydusExit == NULL ||
			!((nydusCanal->building.nydusExit)->status & UnitStatus::Completed) ||
			unit->playerId != nydusCanal->playerId ||
			unit->status & UnitStatus::InAir ||
			unit->getRace() != RaceId::Zerg
		)
		{ //EA478

			if(unit->orderQueueHead != NULL) {
				unit->userActionFlags |= 1;
				prepareForNextOrder(unit);
			}
			else { //EA497

				if(unit->pAI != NULL)
					orderComputer_cl(unit,OrderId::ComputerAI);
				else
					orderComputer_cl(unit,units_dat::ReturnToIdleOrder[unit->id]);

			}

		}
		else
		{ //EA428

			if(unit->mainOrderState == 0) {	//EA464
				if(orderToMoveToTarget(unit,nydusCanal))
					unit->mainOrderState = 1;			
			}
			else
			if(unit->mainOrderState == 1) { //EA43B

				u8 movableState = getUnitMovableState(unit);

				if(movableState == 1)
					unit->mainOrderState = 2;
				else
				if(movableState != 0)
					unit->orderToIdle();

			}

			if(unit->mainOrderState == 2) //EA458
				enterNydusCanal_Effect(unit,nydusCanal);

		}

	} //void orders_EnterNydusCanal(CUnit* unit)

	;

} //namespace hooks

;

//-------- Helper function definitions. Do NOT modify! --------//

namespace {

	//Identical to function @ 0x00401DC0;
	u32 getUnitMovableState(CUnit *unit) {

		if (unit->moveTarget.pt != unit->sprite->position)
			return 0;
		else 
		if (!(unit->status & UnitStatus::Unmovable))
			return 1;
		else
			return 2;

	}

	;

	const u32 Func_OrderComputer_cl = 0x00475310;
	void orderComputer_cl(CUnit* unit, u8 orderId) {

		__asm {
			PUSHAD
			MOV CL, orderId
			MOV ESI, unit
			CALL Func_OrderComputer_cl
			POPAD
		}

	}

	;

	const u32 Func__moveToTarget = 0x004EB980;
	bool orderToMoveToTarget(CUnit *unit, CUnit *target) {

		static Bool32 bPreResult;
	  
		__asm {
			PUSHAD
			MOV EAX, target
			MOV ECX, unit
			CALL Func__moveToTarget
			MOV bPreResult, EAX
			POPAD
		}

		return bPreResult != 0;

	}

	;

} //Unnamed namespace

//End of helper functions