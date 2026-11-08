
void FUN_00437cf0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00440d50(param_1);
  FUN_0043a750(param_1);
  FUN_0043bec0(param_1);
  FUN_0043b7c0(param_1,*(undefined4 *)(param_1 + 0x40));
  FUN_0043a7f0(param_1,*(undefined4 *)(param_1 + 0x44));
  FUN_0043bb10(param_1,*(undefined4 *)(param_1 + 0x50));
  FUN_0043bc40(param_1,*(undefined4 *)(param_1 + 0x54));
  FUN_0043bf40(param_1,*(undefined4 *)(param_1 + 0x60));
  FUN_0043d000(param_1,*(undefined4 *)(param_1 + 0x4c));
  FUN_0043e7b0(param_1,*(undefined4 *)(param_1 + 0x58));
  FUN_0043e8c0(param_1,*(undefined4 *)(param_1 + 100));
  FUN_0043fd80(param_1,*(undefined4 *)(param_1 + 0x48));
  FUN_004405b0(param_1,*(undefined4 *)(param_1 + 0x68));
  FUN_00440430(param_1,*(undefined4 *)(param_1 + 0x5c));
  FUN_00440c80();
  FUN_004acfa0();
  FUN_0049d0f0((undefined4 *)(param_1 + 0x78));
  puVar2 = (undefined4 *)(param_1 + 0x78);
  for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (DAT_005a4300 != 0) {
    OurFreeMem(DAT_005a4300);
    DAT_005a4300 = 0;
  }
  return;
}

