
/* sweep */

uint Loadout_SystemBits(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = 0;
  if (0 < DAT_005a6a54) {
    piVar2 = &DAT_005a68d8;
    iVar3 = DAT_005a6a54;
    do {
      if ((piVar2[-1] == 2) && (*piVar2 != -1)) {
        uVar1 = uVar1 | 1 << ((byte)*piVar2 & 0x1f);
      }
      piVar2 = piVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}

