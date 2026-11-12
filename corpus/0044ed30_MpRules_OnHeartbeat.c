
/* sweep */

void MpRules_OnHeartbeat(undefined4 param_1)

{
  if ((DAT_00590238 != 0) && (*(code **)(DAT_00590238 + 0x68) != (code *)0x0)) {
    (**(code **)(DAT_00590238 + 0x68))(param_1);
  }
  return;
}

