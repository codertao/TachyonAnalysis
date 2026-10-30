
undefined4 FUN_004900a0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = Var_FindSection(param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(iVar1 + 0x30);
}

