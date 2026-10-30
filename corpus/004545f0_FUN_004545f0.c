
void FUN_004545f0(int param_1)

{
  undefined4 uVar1;
  
  *(code **)(param_1 + 0x68) = PlayerDcb_Think;
  *(undefined1 **)(param_1 + 0x6c) = &LAB_004535b0;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(DAT_005b1f0c + 0x290);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x38);
  *(code **)(param_1 + 0x5c) = FUN_00452e40;
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x3c);
  DAT_005b3340 = 0;
  DAT_005b3344 = 0;
  FUN_004a0a90();
  FUN_00492ba0(param_1,&DAT_005b31c0);
  uVar1 = FUN_00455dd0(DAT_005b2154);
  FUN_004560a0(&DAT_005b20e0,DAT_005b1f0c + 0xd0,0,uVar1,DAT_005b9020);
  FUN_004986a0(&DAT_005b214c);
  FUN_0042de70();
  FUN_0041c3e0(1);
  return;
}

