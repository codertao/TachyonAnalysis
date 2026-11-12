
/* sweep */

void MpRules_Tick(void)

{
  if (*(code **)(DAT_00590238 + 0x2c) != (code *)0x0) {
    (**(code **)(DAT_00590238 + 0x2c))();
  }
  MpRules_PeriodicCheck();
  return;
}

