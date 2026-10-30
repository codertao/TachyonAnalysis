
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a0420(void)

{
  FUN_004a0490();
  if (DAT_00563ea8 != (int *)0x0) {
    (**(code **)(*DAT_00563ea8 + 8))(DAT_00563ea8);
    DAT_00563ea8 = (int *)0x0;
  }
  _DAT_00563fd8 = 0;
  _DAT_00563fdc = 0;
  _DAT_00563fe0 = 0;
  _DAT_00563fe4 = 0;
  _DAT_00563fe8 = 0;
  return;
}

