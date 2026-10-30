
void FUN_00426570(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    FUN_0044eaa0();
    if ((*(char *)(param_1 + 0xf0) != '\0') && (*(int *)(param_1 + 0x10c) == 0)) {
      uVar1 = FUN_0049d570(param_1 + 0xf0,&DAT_005a61e0);
      *(undefined4 *)(param_1 + 0x10c) = uVar1;
    }
    if ((*(char *)(param_1 + 0x168) != '\0') && (*(int *)(param_1 + 0x198) == 0)) {
      uVar1 = FUN_00406e80(param_1 + 0x168,1);
      *(undefined4 *)(param_1 + 0x198) = uVar1;
    }
    if ((*(char *)(param_1 + 0x178) != '\0') && (*(int *)(param_1 + 0x19c) == 0)) {
      uVar1 = FUN_00406e80(param_1 + 0x178,1);
      *(undefined4 *)(param_1 + 0x19c) = uVar1;
    }
    if ((*(char *)(param_1 + 0x188) != '\0') && (*(int *)(param_1 + 0x1a0) == 0)) {
      uVar1 = FUN_00406e80(param_1 + 0x188,1);
      *(undefined4 *)(param_1 + 0x1a0) = uVar1;
    }
    if (*(int *)(param_1 + 0x128) == 0) {
      FUN_00431850(param_1 + 0x128,param_1 + 0xb0,param_1 + 0xc0,param_1 + 0xc0,&DAT_005ac548,1);
    }
    if (*(int *)(param_1 + 0x134) == 0) {
      FUN_00431850(param_1 + 0x134,param_1 + 0xd0,param_1 + 0xe0,param_1 + 0xe0,&DAT_005ac548,1);
    }
    FUN_0049c630(0xffff,0xcccc);
    FUN_0044eab0();
    *(undefined4 *)(param_1 + 0x84) = 1;
  }
  return;
}

