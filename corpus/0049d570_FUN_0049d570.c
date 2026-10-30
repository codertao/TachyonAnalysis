
undefined4 FUN_0049d570(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = FUN_0049d150(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(iVar1 + 0x23) == '\0') {
    FUN_004a1310(param_2 + 0x3c);
    FUN_0049d260(iVar1);
    FUN_004a1220();
  }
  FUN_0049c670(*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(param_2 + 0xc4));
  return *(undefined4 *)(iVar1 + 0x24);
}

