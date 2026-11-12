
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

void Map_DrawSectorIcons(void)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_10;
  
  iVar6 = DAT_00563660;
  fVar7 = (float10)Map_GetScrollX();
  local_24 = (int)(longlong)ROUND(fVar7);
  iVar3 = local_24;
  fVar7 = (float10)Map_GetScrollY();
  uVar2 = DAT_005a6810;
  iVar5 = DAT_00563664;
  local_24 = (int)(longlong)ROUND(fVar7);
  Gfx_Lock(1);
  DAT_005a62d0 = 0;
  DAT_005a62d4 = 0;
  for (; (iVar6 != 0 && (iVar5 != 0)); iVar5 = iVar5 + 0xd0) {
    if (*(int *)(iVar5 + 0x6c + *(int *)(iVar5 + 0x58) * 0x18) != 0) {
      Gfx_SelectPalRef(*(undefined4 *)(iVar5 + 0xcc),0);
      local_10 = (int)(longlong)
                      ROUND((((float)*(int *)(iVar5 + 0x40) - (float)iVar3) -
                            (float)(*(int *)(iVar5 + 0x48) >> 1) * *(float *)(iVar5 + 0x5c)) *
                            _DAT_005524d4);
      DAT_005a62d8 = (uint)((longlong)local_10 * (longlong)DAT_005a67e4) >> 0x10 |
                     (int)((ulonglong)((longlong)local_10 * (longlong)DAT_005a67e4) >> 0x20) << 0x10
      ;
      lVar1 = (longlong)
              (int)(longlong)
                   ROUND((((float)*(int *)(iVar5 + 0x44) - (float)local_24) -
                         (float)(*(int *)(iVar5 + 0x54) >> 1) * *(float *)(iVar5 + 0x5c)) *
                         _DAT_005524d4) * (longlong)DAT_005a67e4;
      DAT_005a62dc = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
      local_1c = (int)(longlong)
                      ROUND((float)*(int *)(iVar5 + 0x48) * *(float *)(iVar5 + 0x5c) * _DAT_005524d4
                           );
      DAT_005a62e0 = local_1c * DAT_005a67e4 + 0xffff >> 0x10;
      local_1c = (int)(longlong)
                      ROUND((float)*(int *)(iVar5 + 0x54) * *(float *)(iVar5 + 0x5c) * _DAT_005524d4
                           );
      DAT_005a62e4 = local_1c * DAT_005a67e4 + 0xffff >> 0x10;
      DAT_005a64cc = *(undefined4 *)(iVar5 + 0x48);
      DAT_005a64d0 = *(undefined4 *)(iVar5 + 0x54);
      DAT_005a64c0 = *(undefined4 *)(iVar5 + (*(int *)(iVar5 + 0x58) + 5) * 0x18);
      DAT_005a64c8 = iVar5 + 0x6c + *(int *)(iVar5 + 0x58) * 0x18;
      local_1c = (int)(longlong)ROUND((_DAT_0052e594 / _DAT_005524d4) * _DAT_0052ec68);
      iVar4 = -local_1c - DAT_005524e8;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      *(int *)(iVar5 + 0x70 + *(int *)(iVar5 + 0x58) * 0x18) = iVar4;
      DAT_005a64c4 = *(undefined4 *)(iVar5 + 0x70 + *(int *)(iVar5 + 0x58) * 0x18);
      Gfx_DrawImage();
    }
    iVar6 = iVar6 + -1;
  }
  Gfx_Lock(uVar2);
  return;
}

