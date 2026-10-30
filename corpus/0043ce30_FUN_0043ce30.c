
undefined4 FUN_0043ce30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Ui_FindButton(param_1,param_2);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x204);
  }
  return 0;
}

