
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: wingpal.pal / "MP FACE" */

int Portrait_Load(char *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int *piVar11;
  
  if (DAT_00590d3c == (undefined4 *)0x0) {
    Portrait_LoadPalette(s_wingpal_pal_00548534);
  }
  iVar3 = Portrait_FindByName(param_1);
  if (iVar3 != 0) {
    return *(int *)(iVar3 + 0x18);
  }
  piVar4 = (int *)Portrait_FreeSlot(param_2);
  if (piVar4 == (int *)0x0) {
    return -1;
  }
  Image_LoadWithPal(param_1,0x18,piVar4,0xcccc);
  Mem_SetTag(*piVar4,s_MP_FACE_0054852c);
  puVar2 = DAT_00590d3c;
  puVar7 = DAT_00590d3c;
  puVar9 = &DAT_00603180;
  for (iVar3 = 0xc0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  Pal_ApplyToTexture(puVar2,1);
  Pal_ClearVar3898();
  if (*piVar4 != 0) {
    Pal_RemapToGamePalette(*piVar4,DAT_00603104 * _DAT_00603100);
  }
  uVar5 = 0xffffffff;
  do {
    pcVar10 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  piVar8 = (int *)(pcVar10 + -uVar5);
  piVar11 = piVar4 + 7;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *piVar11 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar11 = piVar11 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)piVar11 = (char)*piVar8;
    piVar8 = (int *)((int)piVar8 + 1);
    piVar11 = (int *)((int)piVar11 + 1);
  }
  return piVar4[6];
}

