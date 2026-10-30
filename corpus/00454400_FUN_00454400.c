
void FUN_00454400(void)

{
  undefined4 uVar1;
  
  if (DAT_005b3344 == 0) {
    DAT_005b3344 = 1;
    *(undefined **)(DAT_005b3300 + 0x68) = &DAT_00454200;
    DAT_005aeebc = 0;
    DAT_005b1ee8 = 0;
    FUN_0041c3e0(0);
    uVar1 = FUN_00454100(DAT_005b3340);
    FUN_00415910(uVar1);
    FUN_004a09b0(0x9c4);
  }
  return;
}

