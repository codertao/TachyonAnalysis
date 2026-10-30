
void FUN_00404440(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((0 < *(int *)(param_1 + 0x130)) && (iVar1 = FUN_004043f0(param_1,DAT_005653f4), iVar1 != 0)) {
    uVar2 = FUN_00419170(DAT_005653e0,DAT_005653e4,DAT_005653e8,DAT_005653ec,param_1 + 0x10c,
                         *(int *)(param_1 + 0x8c) + 0xd0);
    if (*(int *)(param_1 + 0x130) < 1) {
      FUN_00437010(*(undefined4 *)(param_1 + 0xd8),param_1 + 0xdc,DAT_005653f4,
                   *(undefined4 *)(param_1 + 100));
      FUN_00403f70(param_1);
      return;
    }
    iVar1 = *(int *)(param_1 + 0x8c);
    FUN_00437230(*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20),*(int *)(param_1 + 0x130),
                 *(undefined4 *)(iVar1 + 0xf0),*(undefined4 *)(param_1 + 100));
    uVar3 = FUN_00455e40(param_1 + 0x10c,iVar1 + 0xd0,*(undefined4 *)(param_1 + 100));
    FUN_00437290(*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20),*(undefined4 *)(param_1 + 0x114),
                 uVar3);
    DAT_005653fc = FUN_00420eb0(*(int *)(*(int *)(param_1 + 0x8c) + 0x544) == 2,DAT_005653e4);
    FUN_00493ca0(DAT_005653dc,0,uVar2,0,1);
    iVar1 = FUN_004042c0(param_1,DAT_005653f4);
    if (iVar1 != 0) {
      FUN_00402910(param_1,2);
    }
    if (DAT_005653f4 != 0) {
      if (*(int *)(param_1 + 0x334) == DAT_005653f4) {
        *(int *)(param_1 + 0x314) = *(int *)(param_1 + 0x314) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x314) = 0;
      }
      iVar1 = DAT_005653f4;
      *(int *)(param_1 + 0x334) = DAT_005653f4;
      if (0xf < *(int *)(param_1 + 0x314)) {
        FUN_00404110(param_1,iVar1);
      }
      FUN_00437010(*(undefined4 *)(param_1 + 0xd8),param_1 + 0xdc,DAT_005653f4,
                   *(undefined4 *)(param_1 + 100));
      if (*(int *)(*(int *)(param_1 + 0xd8) + 0x44) != -1) {
        FUN_004041f0(param_1,DAT_005653f4);
      }
    }
    if (*(int *)(param_1 + 0x134) == 0) {
      Dcb_InitAiShip(param_1);
    }
  }
  return;
}

