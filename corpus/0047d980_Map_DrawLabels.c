
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Map_DrawLabels(void)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  ulonglong local_1c;
  int local_14;
  
  fVar6 = (float10)Map_GetScrollX();
  local_1c._0_4_ = (int)(longlong)ROUND(fVar6);
  iVar3 = (int)local_1c;
  fVar6 = (float10)Map_GetScrollY();
  local_1c._0_4_ = (int)(longlong)ROUND(fVar6);
  iVar4 = (int)local_1c;
  fVar6 = (float10)Map_GetZoom();
  uVar2 = DAT_005a6810;
  if (((char)DAT_00571ca0 != '\0') && (DAT_00571d20 != 0)) {
    Gfx_Lock(1);
    _DAT_00571d24 = DAT_00571d4c;
    _DAT_00571d28 = DAT_00571d4c;
    _DAT_00571d40 = 0;
    _DAT_00571d30 = DAT_00571d54;
    uVar5 = Text_MeasureWidth(&DAT_00571ca0,DAT_00571d20,2,&DAT_00571d24);
    local_1c = (ulonglong)uVar5;
    fVar1 = (float)local_1c;
    uVar5 = Text_GlyphHeight(&DAT_00571ca0,DAT_00571d20,2,&DAT_00571d24);
    local_1c = (ulonglong)uVar5;
    local_14 = (int)(longlong)
                    ROUND((float)(DAT_00571d5c - iVar3) * (float)fVar6 - fVar1 * _DAT_0052e594);
    local_1c._0_4_ =
         (int)(longlong)
              ROUND((float)(DAT_00571d60 - iVar4) * (float)fVar6 - (float)local_1c * _DAT_0052e594);
    Text_Draw(&DAT_00571ca0,DAT_00571d20,
              (uint)((longlong)local_14 * (longlong)DAT_005a67e4) >> 0x10 |
              (int)((ulonglong)((longlong)local_14 * (longlong)DAT_005a67e4) >> 0x20) << 0x10,
              (uint)((longlong)(int)local_1c * (longlong)DAT_005a67e4) >> 0x10 |
              (int)((ulonglong)((longlong)(int)local_1c * (longlong)DAT_005a67e4) >> 0x20) << 0x10,
              0xffffff,2,&DAT_00571d24);
    Gfx_Lock(uVar2);
  }
  return;
}

