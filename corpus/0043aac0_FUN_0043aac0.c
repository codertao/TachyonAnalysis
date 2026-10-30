
void FUN_0043aac0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Ui_FindWindowDef(param_1,param_2);
  if (iVar1 != 0) {
    FUN_00437bf0(iVar1 + 0xf0,2);
    *(undefined4 *)(iVar1 + 0x10c) = 0;
  }
  return;
}

