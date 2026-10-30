
void FUN_004a2970(void)

{
  if (DAT_005640d8 != 0) {
    FUN_004a2500();
    if (DAT_005640d4 != (int *)0x0) {
      (**(code **)(*DAT_005640d4 + 8))(DAT_005640d4);
      DAT_005640d4 = (int *)0x0;
    }
    DAT_005640d8 = 0;
  }
  return;
}

