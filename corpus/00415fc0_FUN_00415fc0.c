
void FUN_00415fc0(int param_1)

{
  int iVar1;
  
  if (param_1 != -1) {
    iVar1 = Dcb_FindById(param_1);
    if (iVar1 != 0) {
      FUN_00415fa0(iVar1,1);
    }
  }
  return;
}

