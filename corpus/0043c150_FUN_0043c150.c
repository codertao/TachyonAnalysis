
void FUN_0043c150(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = Ui_FindButton(param_1,param_2);
  if (iVar1 != 0) {
    clear_flags(iVar1 + 0x204,param_3);
  }
  return;
}

