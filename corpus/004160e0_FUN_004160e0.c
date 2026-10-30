
void FUN_004160e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = Dcb_FindById(*(int *)(param_1 + 0x10));
  }
  FUN_004231f0(*(undefined1 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x15),param_1,0,uVar1);
  FUN_00415fc0(*(undefined4 *)(param_1 + 0xc));
  return;
}

