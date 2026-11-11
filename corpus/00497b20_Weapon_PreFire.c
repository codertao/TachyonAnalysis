
/* call def+0xdc (charge/arm callback) -> out dmg scale (default 1.0) ; ret 1 fire, 2 abort */

undefined4
Weapon_PreFire(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
              undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(code **)(param_1 + 0xdc) == (code *)0x0) {
    *param_4 = 0x10000;
    return 1;
  }
  uVar1 = (**(code **)(param_1 + 0xdc))(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

