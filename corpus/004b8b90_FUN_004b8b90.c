
void FUN_004b8b90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b8b60(*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    FUN_004b8b30(*(undefined4 *)(param_1 + 4));
    if (DAT_006af624 == DAT_006af620) {
      FUN_004b8af0();
      return;
    }
    FUN_004b8b10(param_1);
  }
  return;
}

