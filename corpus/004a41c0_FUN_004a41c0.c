
undefined4 FUN_004a41c0(undefined4 param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = FUN_004a3fd0(param_1,param_3);
  if (iVar2 == 0) {
    *(undefined4 *)(param_3 + 0xb4) = 1;
    return 0xffffffff;
  }
  pbVar1 = *(byte **)(param_3 + 0x9c);
  if (param_2 != 0) {
    FUN_004a4040(param_2,*(undefined4 *)(pbVar1 + 8),param_3);
    if ((*pbVar1 & 1) != 0) {
      FUN_004a4100(param_2,*(undefined4 *)(pbVar1 + 8));
    }
  }
  *(undefined4 *)(param_3 + 0xb4) = 0;
  return *(undefined4 *)(pbVar1 + 8);
}

