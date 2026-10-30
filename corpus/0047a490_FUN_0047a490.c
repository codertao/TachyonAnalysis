
void FUN_0047a490(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x100) < 0x40) {
    iVar1 = *(uint *)(param_1 + 0x100) + 1;
    *(int *)(param_1 + 0x100) = iVar1;
    *(undefined4 *)(param_1 + iVar1 * 4) = param_2;
  }
  return;
}

