
/* sweep: guess */

void Loadout_ResetInvScroll(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (DAT_00589744 != 0) {
    piVar2 = (int *)(DAT_00589748 + 0x20);
    while (*(int *)(*piVar2 + 0x58) != *(int *)(param_1 + 0x58)) {
      piVar2 = piVar2 + 9;
      uVar1 = uVar1 + 1;
      if (DAT_00589744 <= uVar1) {
        return;
      }
    }
    Loadout_ScrollList(uVar1 - DAT_00577f00);
  }
  return;
}

