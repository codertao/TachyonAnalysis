
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: MAP_RING3 */

void Map_DrawCurrentRing(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  longlong local_28;
  int local_20;
  int iStack_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  float local_8;
  
  local_2c = DAT_005a6810;
  fVar7 = (float10)Map_GetScrollX();
  local_28 = (longlong)ROUND(fVar7);
  local_10 = (int)local_28;
  fVar7 = (float10)Map_GetScrollY();
  local_28 = (longlong)ROUND(fVar7);
  local_14 = (int)local_28;
  iVar3 = Map_FindSector(s_MAP_RING3_005526bc);
  Gfx_Lock(1);
  fVar7 = (float10)Map_GetZoom();
  local_8 = (float)fVar7;
  piVar6 = &DAT_00571d8c;
  local_c = 0x10;
  do {
    if (((piVar6[-3] != 0) && (iVar3 != 0)) && (*(int *)(iVar3 + 0x6c) != 0)) {
      Gfx_SelectPalRef(*(undefined4 *)(iVar3 + 0xcc),0);
      local_28._0_4_ = (int)(longlong)ROUND(((float)piVar6[-1] - (float)local_10) * local_8);
      iVar4 = (int)local_28;
      local_28._0_4_ = (int)(longlong)ROUND(((float)*piVar6 - (float)local_14) * local_8);
      iVar2 = (int)local_28;
      local_28._0_4_ =
           (int)(longlong)
                ROUND((float)*(int *)(iVar3 + 0x48) * *(float *)(iVar3 + 0x5c) *
                      ((float)piVar6[2] / (float)piVar6[1]) * local_8 * _DAT_0052e594);
      lVar1 = (longlong)(iVar4 - (int)local_28) * (longlong)DAT_005a67e4;
      local_3c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      local_20 = (int)(longlong)
                      ROUND((float)*(int *)(iVar3 + 0x54) * *(float *)(iVar3 + 0x5c) *
                            ((float)piVar6[2] / (float)piVar6[1]) * local_8 * _DAT_0052e594);
      iVar5 = iVar2 - local_20;
      local_18 = local_20;
      _local_20 = CONCAT44(iVar5,local_20);
      lVar1 = (longlong)iVar5 * (longlong)DAT_005a67e4;
      local_38 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      lVar1 = (longlong)((int)local_28 + iVar4) * (longlong)DAT_005a67e4;
      local_34 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      lVar1 = (longlong)(local_20 + iVar2) * (longlong)DAT_005a67e4;
      local_30 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      local_28 = (longlong)ROUND((_DAT_0052e594 / _DAT_005524d4) * _DAT_0052ec68);
      iVar4 = -(int)local_28 - DAT_005524e8;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      *(int *)(iVar3 + 0x70) = iVar4;
      Ui_DrawRotatedArrow(iVar3 + 0x6c,&local_3c,piVar6[4],0x30200008);
    }
    piVar6 = piVar6 + 9;
    local_c = local_c + -1;
  } while (local_c != 0);
  Gfx_Lock(local_2c);
  return;
}

