
undefined4 FUN_0049d1c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0049d150(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined1 *)(iVar1 + 0x22) = 1;
  return 1;
}

