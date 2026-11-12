
/* sweep */

void Pal_FreeCached(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = &DAT_006128d4;
  iVar3 = 0x100;
  do {
    if (((*piVar2 != 0) && (piVar2[-5] == param_1)) &&
       (iVar1 = *piVar2 + -1, *piVar2 = iVar1, iVar1 == 0)) {
      PalRef_Free(piVar2[-5]);
    }
    piVar2 = piVar2 + 6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

