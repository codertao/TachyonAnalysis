
/* sweep */

undefined4 * Pak_FindLoaded(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar2 = &DAT_006110a0;
  iVar4 = 0;
  puVar3 = &DAT_006110a4;
  do {
    if (puVar3[4] != 0) {
      iVar1 = __stricmp(puVar3,param_1);
      if (iVar1 == 0) {
        return puVar2;
      }
    }
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 6;
    puVar3 = puVar3 + 6;
  } while (iVar4 < 0x100);
  return (undefined4 *)0x0;
}

