
undefined4 FUN_0043a820(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = Ui_FindWindowDef(param_1,param_2);
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(iVar2 + 0x10c);
    *(undefined4 *)(iVar2 + 0x10c) = param_3;
    return uVar1;
  }
  return 0;
}

