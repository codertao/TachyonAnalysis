
int FUN_004a8c20(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004a1620(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_004a8b10(iVar1);
  if (iVar2 != iVar1) {
    FUN_0049c530(iVar1);
    return iVar2;
  }
  return iVar1;
}

