
void FUN_00403230(int param_1,int param_2)

{
  uint uVar1;
  
  if ((DAT_0058b064 != 0) && ((*(uint *)(param_2 + 0x24) & 0x200) != 0)) {
    uVar1 = FUN_0048e440(param_1 + 0x34,DAT_0058b064 + 0x34);
    FUN_0048df80(uVar1 >> 0xd,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_2 + 0x20));
  }
  return;
}

