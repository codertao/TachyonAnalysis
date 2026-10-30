
void FUN_004500c0(void)

{
  if (DAT_00590d50 == 1) {
    FUN_0044f550();
  }
  else if (DAT_00590d50 == 2) {
    FUN_0044f670();
  }
  if (*(code **)(DAT_00590238 + 0x30) != (code *)0x0) {
    (**(code **)(DAT_00590238 + 0x30))();
  }
  FUN_0044f0e0();
  FUN_00491660();
  return;
}

