
/* sweep */

void MpRules_Hook3c(undefined4 param_1,undefined4 param_2)

{
  if (*(code **)(DAT_00590238 + 0x3c) != (code *)0x0) {
    (**(code **)(DAT_00590238 + 0x3c))(param_1,param_2);
  }
  return;
}

