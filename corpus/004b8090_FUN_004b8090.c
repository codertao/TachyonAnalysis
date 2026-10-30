
void FUN_004b8090(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004b7f50(*(undefined4 *)(param_1 + 4),param_2);
  if (iVar1 == 0) {
    FUN_004b7f10(*(undefined4 *)(param_1 + 4),param_2);
    if (*(short *)(param_1 + 8) == 1) {
      FUN_004b8030(*(undefined4 *)(param_1 + 10),param_2);
    }
  }
  return;
}

