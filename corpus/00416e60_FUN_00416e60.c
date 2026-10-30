
void FUN_00416e60(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = Dcb_FindById(*param_1);
  if (iVar1 != 0) {
    FUN_0040b2c0(iVar1,*(undefined2 *)(param_1 + 2),param_1[1]);
  }
  return;
}

