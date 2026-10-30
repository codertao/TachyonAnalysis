
void FUN_00454460(void)

{
  if (DAT_005b3344 == 2) {
    DAT_005b3344 = 4;
    *(undefined **)(DAT_005b3300 + 0x68) = &DAT_00454320;
    FUN_004a09b0(0x9c4);
    FUN_004a0760(0,0xd05,500000,1);
    if (*(code **)(DAT_005b1dc4 + 0x78) != (code *)0x0) {
      (**(code **)(DAT_005b1dc4 + 0x78))(0);
    }
    FUN_004666e0(1,0x15,0,DAT_005b3300,0x10000);
  }
  return;
}

