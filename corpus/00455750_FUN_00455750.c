
void FUN_00455750(void)

{
  if (*(code **)(DAT_005b1dc4 + 0xa0) != (code *)0x0) {
    (**(code **)(DAT_005b1dc4 + 0xa0))();
  }
  DAT_005b39ec = 1;
  FUN_00466590(1,5,4,0xff);
  FUN_00458750(&LAB_004585c0);
  FUN_00423e80(DAT_005b3300,DAT_005b1ecc);
  *(undefined1 **)(DAT_005b3300 + 0x68) = &LAB_00455740;
  FUN_0042e810();
  FUN_004159e0();
  return;
}

