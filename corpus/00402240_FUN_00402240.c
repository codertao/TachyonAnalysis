
void FUN_00402240(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xf8) == 0) {
    FUN_00401f80(param_1);
  }
  FUN_00402210(param_1,*(undefined4 *)(param_1 + 0xf8));
  uVar1 = FUN_00434850(param_1,*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x5c),param_1 + 0x10c);
  FUN_00434690(uVar1);
  FUN_00402020(param_1,*(undefined4 *)(param_1 + 0xd8));
  return;
}

