
void FUN_0043f620(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043fa70(param_1,param_2);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x10c) = *(uint *)(iVar1 + 0x10c) | param_3;
  }
  return;
}

