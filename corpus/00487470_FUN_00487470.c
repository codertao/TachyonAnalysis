
void FUN_00487470(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00487040(*(undefined4 *)**(undefined4 **)(param_1 + 4),
                       *(undefined4 *)**(undefined4 **)(param_1 + 8),
                       *(undefined4 *)**(undefined4 **)(param_1 + 0xc));
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 != 0) {
    FUN_004870b0();
    return;
  }
  FUN_00487350(param_1);
  return;
}

