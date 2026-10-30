
void FUN_0046d4f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 200) != 0) {
    FUN_0046d770(DAT_005879a0,param_1 + 0xcc,param_1 + 0xec,*(undefined4 *)(param_1 + 0x114),
                 *(undefined4 *)(param_1 + 0x10c),*(undefined4 *)(param_1 + 0x110),
                 *(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x11c),0xff);
    return;
  }
  iVar1 = FUN_0043fa70(DAT_005879a0,param_1 + 0xcc);
  if (iVar1 != 0) {
    FUN_0043f620(DAT_005879a0,param_1 + 0xcc,0x20000);
  }
  return;
}

