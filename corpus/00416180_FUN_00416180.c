
void FUN_00416180(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = Dcb_FindById(*param_1);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0xf0) == '\0')) {
    *(undefined1 *)(iVar1 + 0xf0) = 1;
    FUN_00416120(iVar1,*(undefined2 *)(param_1 + 1),param_1);
  }
  return;
}

