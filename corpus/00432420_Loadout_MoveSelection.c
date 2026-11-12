
/* sweep */

void Loadout_MoveSelection(int param_1)

{
  int iVar1;
  
  if (DAT_005a73e8 != 0) {
    param_1 = DAT_005a73e0 + param_1;
    if (param_1 < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = DAT_005a73dc + -1;
      if (param_1 <= iVar1) goto LAB_00432495;
    }
    param_1 = iVar1;
LAB_00432495:
    if (DAT_005a73e0 == param_1) {
      DAT_005a73e0 = param_1;
      return;
    }
    DAT_005a73e0 = param_1;
    Snd_Play2D(0x13,0,0,0xff);
    return;
  }
  param_1 = DAT_005a6a58 + param_1;
  if (param_1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_005a6a54 + -1;
    if (param_1 <= iVar1) goto LAB_00432453;
  }
  param_1 = iVar1;
LAB_00432453:
  if (DAT_005a6a58 == param_1) {
    DAT_005a6a58 = param_1;
    return;
  }
  DAT_005a6a58 = param_1;
  Snd_Play2D(0x13,0,0,0xff);
  return;
}

