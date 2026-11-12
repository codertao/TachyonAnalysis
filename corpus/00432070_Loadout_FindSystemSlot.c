
/* sweep */

void Loadout_FindSystemSlot(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = &DAT_005a68d4;
  uVar2 = 0;
  while (((*piVar1 != 2 || (piVar1[1] != -1)) ||
         ((*(uint *)(DAT_005b1f0c + 0x680 + piVar1[2] * 4) & param_2) == 0))) {
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 3;
    if (0x1f < uVar2) {
      return;
    }
  }
  piVar1[1] = param_1;
  return;
}

