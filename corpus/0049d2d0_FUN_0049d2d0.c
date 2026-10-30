
undefined4 FUN_0049d2d0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x23) == '\0') {
    FUN_004a1310(param_3 + 0x3c);
    if ((*(byte *)(param_2 + 4) & 2) == 0) {
      FUN_0049d260(param_1);
    }
    else {
      FUN_0049d1f0(param_1,1);
    }
    FUN_004a1220();
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0;
  }
  FUN_0049c670(*(int *)(param_1 + 0x24),*(undefined4 *)(param_3 + 0xc4));
  uVar2 = (uint)*(byte *)(param_1 + 0x21);
  if (uVar2 == 0) {
    uVar2 = 0xff;
  }
  uVar2 = param_2[2] * uVar2 >> 8;
  if (((param_2[4] & 4) != 0) && ((uint)param_2[7] < uVar2)) {
    uVar2 = param_2[7];
  }
  if (uVar2 < *(uint *)(param_3 + 0xc0)) {
    return 0;
  }
  if (((param_2[4] & 2) != 0) && (param_2[8] != 0)) {
    *(undefined4 *)(param_1 + 0x28) = param_2[8];
    *(undefined4 *)(param_1 + 0x2c) = param_2[9];
  }
  if (((*(byte *)(param_2 + 4) & 1) == 0) && (*(int *)(param_3 + 0xbc) != 0)) {
    uVar3 = FUN_0049e9e0(*(undefined4 *)(param_1 + 0x24));
    if (*(uint *)(param_3 + 0xbc) <= uVar3) {
      return 0xffffffff;
    }
  }
  iVar1 = param_2[3];
  if (iVar1 == -1) {
    if ((*(byte *)(param_2 + 4) & 2) != 0) {
      uVar4 = FUN_0049e900(*(undefined4 *)(param_1 + 0x24),param_2[1],uVar2,*param_2,param_1);
      return uVar4;
    }
    uVar4 = FUN_0049e8d0(*(undefined4 *)(param_1 + 0x24),param_2[1],uVar2,*param_2);
    return uVar4;
  }
  if ((*(byte *)(param_2 + 4) & 2) != 0) {
    uVar4 = FUN_0049e980(iVar1,*(undefined4 *)(param_1 + 0x24),param_2[1],uVar2,*param_2,param_1);
    return uVar4;
  }
  uVar4 = FUN_0049e940(iVar1,*(undefined4 *)(param_1 + 0x24),param_2[1],uVar2,*param_2);
  return uVar4;
}

