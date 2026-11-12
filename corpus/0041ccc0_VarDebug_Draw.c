
/* sweep */

void VarDebug_Draw(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int local_144;
  char local_140 [64];
  undefined1 local_100 [256];
  
  iVar2 = Var_FindSection(&DAT_005b2724);
  if (iVar2 != 0) {
    Gfx_Lock(1);
    uVar4 = 0xffffffff;
    pcVar9 = &DAT_005b2724;
    do {
      pcVar7 = pcVar9;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar9 = pcVar7 + -uVar4;
    pcVar7 = local_140;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar7 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar7 = pcVar7 + 1;
    }
    __strupr(local_140);
    Ui_DrawBox(DAT_005b276c,10,10,0xf0,0x1cc,0x80,DAT_005b2770,local_140,0xc0ff,0x10000,2);
    uVar4 = *(int *)(iVar2 + 0x20) - DAT_005b2768;
    iVar8 = 0x28;
    if (0x34 < uVar4) {
      uVar4 = 0x34;
    }
    puVar6 = (undefined4 *)(*(int *)(iVar2 + 0x28) + DAT_005b2768 * 0xc);
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      Var_GetByIndex(DAT_005a6148,*(undefined4 *)(iVar2 + 0x30),puVar6[1],&local_144);
      iVar3 = Var_GetKeyByIndex(puVar6[2],local_144);
      if (iVar3 == 0) {
        uVar10 = *puVar6;
        pcVar9 = s__s____d_00534e90;
        iVar3 = local_144;
      }
      else {
        uVar10 = *puVar6;
        pcVar9 = s__s____s_00534e98;
      }
      str_sprintf(local_100,pcVar9,uVar10,iVar3);
      Text_DrawAligned(local_100,DAT_005b2774,0x14,iVar8,0xffff00,0xffff,0x10000,0);
      iVar8 = iVar8 + 8;
      puVar6 = puVar6 + 3;
    }
  }
  return;
}

