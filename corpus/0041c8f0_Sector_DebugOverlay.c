
/* REGION_DEBUG overlay: render galaxy table (count 0x5a5544, base 0x5a5548, stride 0x44;
   MainSPX@+0xc, SubSPX@+0x1c) */

void Sector_DebugOverlay(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  uint local_10c;
  char local_100 [128];
  char local_80 [128];
  
  Gfx_Lock(1);
  uVar7 = (uint)*(byte *)(*DAT_005b2770 + 4);
  Ui_DrawBox(DAT_005b276c,0x14,0x14,500,400,0x80,DAT_005b2770,s_REGION_DEBUG_00534e54,0xffff00,80000
             ,2);
  str_sprintf(local_100,s_Region__d_Sector__d_00534e3c,DAT_005b39ac,DAT_005b39b0);
  Text_DrawAligned(local_100,DAT_005b2770,0x1c,0x2c,0xffffff,0xffff,0x10000,2);
  iVar9 = uVar7 + 0x2c;
  local_10c = 0;
  if (g_SectorCount != 0) {
    piVar8 = (int *)&g_SectorTable[0].field_0x8;
    do {
      iVar3 = (((Quadrant *)piVar8[-2] != g_SrvCurShip->quadrant) - 1 & 0xdeffe0) + 0x20ff20;
      uVar2 = Sector_GetQuadrantName((Quadrant *)piVar8[-2]);
      str_sprintf(local_100,&DAT_00534e38,uVar2);
      Text_DrawAligned(local_100,DAT_005b2770,0x1c,iVar9,iVar3,0xffff,0x10000,2);
      str_sprintf(local_100,s_Main_SPX__s_00534e24,piVar8 + 1);
      if (*piVar8 != 0) {
        str_sprintf(local_80,s_Sub_SPX__s_00534e18,piVar8 + 5);
        uVar4 = 0xffffffff;
        pcVar10 = local_80;
        do {
          pcVar12 = pcVar10;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar12 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        iVar5 = -1;
        pcVar10 = local_100;
        do {
          pcVar11 = pcVar10;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        pcVar10 = pcVar12 + -uVar4;
        pcVar12 = pcVar11 + -1;
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      Text_DrawAligned(local_100,DAT_005b2770,0x1c,iVar9 + uVar7,iVar3,0xffff,0x10000,2);
      iVar9 = iVar9 + uVar7 + uVar7;
      local_10c = local_10c + 1;
      piVar8 = piVar8 + 0x11;
    } while (local_10c < g_SectorCount);
  }
  return;
}

