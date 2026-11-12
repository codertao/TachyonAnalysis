
/* sweep */

void Voice_OnPttKey(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    Voice_StopTransmit();
    return;
  }
  if ((param_2 == 1) && (DAT_00565884 == 0)) {
    Voice_StartTransmit();
    return;
  }
  return;
}

