
undefined4 FUN_00413290(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0xd4) == 0) && (param_2 != 4)) {
    uVar1 = FUN_004645c0(param_1,param_2,param_3);
    return uVar1;
  }
  if (param_2 == 1) {
    uVar1 = FUN_00413270(param_1,param_3);
    return uVar1;
  }
  if (param_2 != 4) {
    return 0;
  }
  uVar1 = FUN_00458060(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x158));
  return uVar1;
}

