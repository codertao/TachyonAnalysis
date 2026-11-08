
undefined4 FUN_00412630(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = Sped_GetDefList(param_1,param_3);
  iVar2 = FUN_004345f0(uVar1,*(undefined4 *)(param_1 + 0x5c));
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 0;
  }
  iVar2 = FUN_004344d0(*(undefined4 *)(param_2 + 0x158));
  if (iVar2 != 0) {
    *(int *)(param_3 + 0x4c) = *(int *)(param_3 + 0x4c) + 1;
    *(int *)(param_3 + 0x50) = *(int *)(param_3 + 0x50) + 1;
  }
  CapShip_SpawnParts(*(undefined4 *)(param_2 + 0x154),param_1,param_3,param_2);
  return 1;
}

