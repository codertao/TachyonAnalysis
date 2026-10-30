
void FUN_0041e850(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_40 [64];
  
  if (DAT_00590e48 == 0) {
    if (*(int *)(param_2 + 0x34) != 0) {
      FUN_004b5670(*(int *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38));
    }
    iVar1 = FUN_00466960(param_2 + 0x10,DAT_005b2d14,param_4);
    iVar2 = FUN_0048e850(DAT_005a5dc8,param_2);
    if (iVar1 != 0) {
      FUN_0049c670(iVar1,0xcccc);
    }
    if (iVar2 != 0) {
      FUN_0048ce30(iVar2,0xffffffff);
    }
    if ((iVar1 == 0) && (DAT_005a6730 != 0)) {
      str_sprintf(local_40,s_Could_not_play___s__005356dc,param_2 + 0x10);
      FUN_0048ce30(local_40,DAT_005a6320._2_1_);
    }
    iVar2 = FUN_0049eaa0(iVar1,0,0xffffffff);
    FUN_00465e10((iVar2 * 0x19 & 0x7fffffffU) >> 0xf);
    if (*(int *)(param_2 + 0x3c) != 0) {
      iVar2 = FUN_0049eaa0(iVar1,0);
      FUN_0042e1f0((iVar2 * 0x19 & 0x7fffffffU) >> 0xf);
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      if (iVar1 == 0) {
        return;
      }
      DAT_005b22e8 = param_1;
      iVar2 = FUN_0049eaa0(iVar1,0);
      DAT_005b22ec = ((iVar2 * 0x19 & 0x7fffffffU) >> 0xf) + 0x19;
      DAT_005b22f0 = 0;
    }
    if ((iVar1 != 0) && (param_3 != 0)) {
      iVar1 = FUN_0049eaa0(iVar1,0);
      DAT_005b22fc = ((iVar1 * 0x19 & 0x7fffffffU) >> 0xf) + 0x19;
      DAT_005b22f8 = param_3;
    }
  }
  return;
}

