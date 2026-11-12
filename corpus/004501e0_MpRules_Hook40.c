
/* sweep */

void MpRules_Hook40(undefined4 param_1,undefined4 param_2)

{
  if (*(code **)(DAT_00590238 + 0x40) != (code *)0x0) {
    (**(code **)(DAT_00590238 + 0x40))(param_1,param_2);
  }
  return;
}

