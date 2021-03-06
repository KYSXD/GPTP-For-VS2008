#include "../../hook_tools.h"
#include "weapon_cooldown.h"

namespace {

void __declspec(naked) getModifiedWeaponCooldownWrapper() {
    static CUnit* unit;
    static u8     weaponId;
    static u32    cooldown;

    __asm {
		MOV unit, ESI
		MOV weaponId, AL
		PUSHAD
    }

    cooldown = hooks::getModifiedWeaponCooldownHook(unit, weaponId);

    __asm {
		POPAD
		MOV EAX, cooldown
		RETN
    }
}

}  // unnamed namespace

namespace hooks {

void injectWeaponCooldownHook() {
    jmpPatch(getModifiedWeaponCooldownWrapper, 0x00475DC0, 2);
}

}  // namespace hooks
