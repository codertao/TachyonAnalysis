
/* sweep: guess */

void MpEnt_ResetAll(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = DAT_006af660;
  if (DAT_005897e0 != 0) {
    do {
      if (*piVar1 != 0) {
        if (*(code **)(DAT_00590238 + 0x54) != (code *)0x0) {
          (**(code **)(DAT_00590238 + 0x54))(piVar1,param_1);
        }
        if (*(code **)(DAT_00590238 + 0x60) != (code *)0x0) {
          (**(code **)(DAT_00590238 + 0x60))(piVar1);
        }
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0x82;
    } while (uVar2 < DAT_005897e0);
  }
  return;
}

