
void FUN_0043c1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = Ui_FindButton(param_1,param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc4) = param_3;
  }
  return;
}

