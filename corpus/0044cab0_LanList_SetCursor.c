
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

void LanList_SetCursor(int param_1)

{
  int *piVar1;
  
  _DAT_00591620 = param_1;
  piVar1 = DAT_0055e3e8;
  if (DAT_0055e3e8 != (int *)0x0) {
    while (param_1 != piVar1[2]) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    DAT_00591630 = piVar1[4];
    DAT_00591634 = piVar1[5];
    _DAT_00591638 = piVar1[6];
    _DAT_0059163c = piVar1[7];
  }
  return;
}

