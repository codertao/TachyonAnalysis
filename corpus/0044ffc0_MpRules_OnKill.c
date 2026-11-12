
/* sweep: guess, rules +0x1c */

void MpRules_OnKill(undefined4 param_1,undefined4 param_2)

{
  if (*(code **)(DAT_00590238 + 0x1c) != (code *)0x0) {
    (**(code **)(DAT_00590238 + 0x1c))(param_1,param_2);
  }
  return;
}

