
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466440(vec3 *param_1,vec3 *param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = distance_between(param_1,param_2);
  DAT_00563588 = 0xff - (uVar1 >> 0x11);
  if (DAT_00563588 < 0) {
    DAT_00563588 = 0;
  }
  _DAT_00563594 = uVar1 * 8;
  _DAT_00563580 = param_3;
  if (0x10000 < uVar1) {
    uVar1 = FUN_0040ed40(param_1,param_2);
    _DAT_00563584 = uVar1 >> 1;
    return;
  }
  _DAT_00563584 = 0;
  return;
}

