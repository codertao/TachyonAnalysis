
/* refcounted palette cache by name (256 slots @0x6128c0); new palettes remapped with
   Pak_SetLoadPalParams values */

int Pal_GetCached(char *param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  
  piVar2 = (int *)Pal_FindCached(param_1);
  if (piVar2 != (int *)0x0) {
    piVar2[5] = piVar2[5] + 1;
    return *piVar2;
  }
  piVar2 = &DAT_006128c0;
  uVar3 = 0;
  while (piVar2[5] != 0) {
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 6;
    if (0xff < uVar3) {
      return 0;
    }
  }
  iVar4 = Pal_Load(param_1);
  if (iVar4 != 0) {
    Pal_Remap(iVar4,DAT_00666b08,DAT_00666b0c,DAT_00666b10,DAT_00666b14,DAT_00666b18);
    uVar3 = 0xffffffff;
    *piVar2 = iVar4;
    do {
      pcVar7 = param_1;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    piVar6 = (int *)(pcVar7 + -uVar3);
    piVar8 = piVar2;
    for (uVar5 = uVar3 >> 2; piVar8 = piVar8 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)piVar8 = (char)*piVar6;
      piVar6 = (int *)((int)piVar6 + 1);
      piVar8 = (int *)((int)piVar8 + 1);
    }
    piVar2[5] = 1;
  }
  return iVar4;
}

