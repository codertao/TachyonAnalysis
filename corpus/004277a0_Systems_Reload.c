
/* sweep */

void Systems_Reload(undefined4 param_1)

{
  clr_bytes(&DAT_005b1ba0,100);
  Systems_LoadMountedHardware(param_1);
  return;
}

