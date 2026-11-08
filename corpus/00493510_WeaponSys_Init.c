
/* 0x38-byte weapon system: +0 def, +4/+8 mounts, +0xc nMounts, +0x1c clock ptr, +0x20 last fire,
   +0x24 flags */

void WeaponSys_Init(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,
                   undefined4 param_5,int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  
  clr_bytes(param_1,0x38);
  uVar1 = param_2[2];
  param_1[3] = uVar1;
  param_1[10] = (int)(0x80 / (ulonglong)uVar1);
  if (param_6 != 0) {
    param_1[9] = param_1[9] | 4;
  }
  uVar2 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar2;
  *param_1 = param_3;
  WeaponSys_CalcCosts(param_1,param_2);
  if (param_4 == 0) {
    param_1[9] = param_1[9] | 1;
    param_1[7] = &DAT_005897e4;
    return;
  }
  param_1[9] = param_1[9] | 2;
  param_1[7] = &DAT_005b3304;
  return;
}

