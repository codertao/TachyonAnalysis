
void FUN_004546f0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = DAT_005b3300;
  *(undefined4 *)(DAT_005b3300 + 0x34) = *param_1;
  *(undefined4 *)(iVar1 + 0x38) = param_1[1];
  *(undefined4 *)(iVar1 + 0x3c) = param_1[2];
  iVar1 = DAT_005b3300;
  *(undefined4 *)(DAT_005b3300 + 0x4c) = *param_2;
  *(undefined4 *)(iVar1 + 0x50) = param_2[1];
  *(undefined4 *)(iVar1 + 0x54) = param_2[2];
  FUN_004545f0(DAT_005b3300);
  FUN_004546a0();
  FUN_0041c3e0(1);
  if (*(code **)(DAT_005b1dc4 + 0x88) != (code *)0x0) {
    (**(code **)(DAT_005b1dc4 + 0x88))(1);
  }
  FUN_004107c0(0,0);
  FUN_004103b0();
  FUN_0044f3e0(0);
  FUN_00430320();
  FUN_00430210(&PTR_DAT_0053e9b8);
  FUN_00430210(&PTR_DAT_0053e978);
  FUN_00430150(&PTR_DAT_0053e600);
  return;
}

