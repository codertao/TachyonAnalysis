
void FUN_0043f7d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_0043fa70(param_1,param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xf8) = param_3;
    *(undefined4 *)(iVar1 + 0x100) = param_4;
    *(undefined4 *)(iVar1 + 0x104) = param_5;
    *(undefined4 *)(iVar1 + 0xfc) = 0;
  }
  return;
}

