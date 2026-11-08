
void FUN_00426370(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xf0);
  if ((iVar1 != 0) && (*(short *)(iVar1 + 0x50) != -1)) {
    Var_SetAndNotify((int)*(short *)(iVar1 + 0x50),*(undefined2 *)(iVar1 + 0x52),1);
  }
  return;
}

