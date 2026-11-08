
void FUN_0043a8a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = Ui_FindWindowDef(param_1,param_2);
  if (iVar1 != 0) {
    sbi_flags(iVar1 + 0xf0,param_3);
  }
  return;
}

