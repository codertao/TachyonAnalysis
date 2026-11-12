
/* sweep */

void Teletype_UpdateAll(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = &DAT_0056aca0;
  do {
    if ((piVar2[0x1a] != 0) &&
       (((piVar2[0x18] != 0 || (piVar2[-0x19] != 0)) &&
        (iVar1 = *piVar2, *piVar2 = iVar1 + -1, iVar1 + -1 < 1)))) {
      *piVar2 = piVar2[-2];
      piVar2[0xe] = piVar2[0xf];
      iVar1 = piVar2[0xf];
      piVar2[0xf] = iVar1 + piVar2[-1];
      if (piVar2[-0x3a] < iVar1 + piVar2[-1]) {
        piVar2[0xf] = piVar2[-0x3a];
        piVar2[0x19] = 1;
      }
      if (piVar2[-0x14] <= piVar2[0x14]) {
        piVar2[0xf] = piVar2[-0x3a];
        piVar2[0x19] = 1;
      }
      Teletype_Advance(iVar3);
      if (piVar2[0x19] != 0) {
        if (piVar2[-0x1a] != 0) {
          piVar2[-0x1a] = piVar2[-0x1a] + -1;
        }
        if (((piVar2[0x19] != 0) && (piVar2[-0x19] != 0)) && (piVar2[-0x1a] == 0)) {
          Teletype_SetInstant(iVar3,0);
        }
      }
    }
    piVar2 = piVar2 + 0x5c;
    iVar3 = iVar3 + 1;
  } while ((int)piVar2 < 0x56c3a0);
  return;
}

