
void FUN_004b7fe0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004b7f50(*(undefined4 *)(param_1 + 4),param_2);
  if (iVar1 == 0) {
    FUN_004b7f10(*(undefined4 *)(param_1 + 4),param_2);
    if (DAT_006af6ec == DAT_006af6e0) {
      FUN_004b7f80();
      return;
    }
    FUN_004b7fb0(param_1);
  }
  return;
}

