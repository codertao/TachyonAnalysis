
void FUN_00425850(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x8c);
    if (*(int *)(*(int *)(param_1 + 0xd8) + 0xe8) != 0) {
      if (*(int *)(param_1 + 0xd0) == 0) {
        uVar2 = FUN_00406e80(iVar1 + 0x168,1);
        *(undefined4 *)(param_1 + 0xd0) = uVar2;
      }
      if (*(int *)(*(int *)(param_1 + 0xd8) + 0xd0) == 0) {
        uVar2 = FUN_00406e80(iVar1 + 0x178,1);
        *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0xd0) = uVar2;
      }
      if (*(int *)(*(int *)(*(int *)(param_1 + 0xd8) + 0xd8) + 0xd0) == 0) {
        uVar2 = FUN_00406e80(iVar1 + 0x188,1);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xd8) + 0xd8) + 0xd0) = uVar2;
      }
      FUN_00407af0(param_1,*(undefined4 *)(param_1 + 0xd0),s_GATE_OPEN_00536128,param_2,param_3,
                   FUN_00425800);
      FUN_00407af0(*(int *)(param_1 + 0xd8),*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0xd0),
                   s_GATEWAY_OPEN_00536118,0,param_3,FUN_00425800);
      iVar1 = *(int *)(*(int *)(param_1 + 0xd8) + 0xd8);
      FUN_00407af0(iVar1,*(undefined4 *)(iVar1 + 0xd0),s_GATEWAY_OPEN_00536118,0,param_3,
                   FUN_00425800);
      *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x160);
      return;
    }
    if (*(int *)(param_1 + 0xd0) == 0) {
      uVar2 = FUN_00406e80(iVar1 + 0x168,1);
      *(undefined4 *)(param_1 + 0xd0) = uVar2;
    }
    if (*(int *)(*(int *)(param_1 + 0xd8) + 0xd0) == 0) {
      uVar2 = FUN_00406e80(iVar1 + 0x178,1);
      *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0xd0) = uVar2;
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 0xd8) + 0xd8) + 0xd0) == 0) {
      uVar2 = FUN_00406e80(iVar1 + 0x188,1);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xd8) + 0xd8) + 0xd0) = uVar2;
    }
    FUN_00407af0(param_1,*(undefined4 *)(param_1 + 0xd0),s_GATE_CLOSE_0053610c,param_2,param_3,
                 FUN_00425800);
    FUN_00407af0(*(int *)(param_1 + 0xd8),*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0xd0),
                 s_GATEWAY_CLOSE_005360fc,0,param_3,FUN_00425800);
    iVar1 = *(int *)(*(int *)(param_1 + 0xd8) + 0xd8);
    FUN_00407af0(iVar1,*(undefined4 *)(iVar1 + 0xd0),s_GATEWAY_CLOSE_005360fc,0,param_3,FUN_00425800
                );
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x164);
  }
  return;
}

