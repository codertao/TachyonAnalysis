
/* sweep: guess */

void NW_DrawBrowserFrame(void)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  uVar7 = DAT_0060446c;
  uVar6 = DAT_00604468;
  uVar5 = DAT_00604464;
  uVar4 = DAT_00604460;
  piVar12 = &DAT_00591140;
  if ((((DAT_00562c98 == 0) && (DAT_005927cc != 0)) && (DAT_005927e0 != 0)) && (DAT_0059124c != 0))
  {
    DAT_00562c9c = DAT_00562c9c + 1;
    Gfx_UnlockSurface();
    Viewport_SetScaled(0xc,0x36,0x274,0x1a8,1);
    copy_str32_to_some_global(&DAT_005a67a0);
    Gfx_Lock(1);
    DAT_005a62d0 = 0;
    DAT_005a62d4 = 0;
    DAT_005a64c0 = 0x30000008;
    Gfx_SelectPalRef(DAT_0059124c,0);
    uVar8 = 0x172;
    local_c = 0;
    local_18 = 0;
    local_10 = 0;
    uVar10 = DAT_005927e4;
    if (DAT_005927e8 != 0) {
      do {
        uVar11 = 0x100;
        if (uVar8 < 0x101) {
          uVar11 = uVar8;
        }
        uVar8 = uVar8 - uVar11;
        uVar9 = 0x268;
        local_8 = 0;
        local_14 = 0;
        if (uVar10 != 0) {
          do {
            uVar2 = DAT_00591640;
            if (5 < local_10) break;
            uVar10 = 0x100;
            if (uVar9 < 0x101) {
              uVar10 = uVar9;
            }
            uVar9 = uVar9 - uVar10;
            *piVar12 = local_8;
            iVar3 = DAT_005927cc;
            piVar12[2] = uVar10;
            piVar12[3] = uVar11;
            piVar12[1] = local_c;
            Blit_SetSrc(iVar3,uVar2,0x268);
            Blit_SetDst(piVar12[4],DAT_00591640,0x100);
            Blit_CopyRect(0,0,uVar10,uVar11,*piVar12,piVar12[1]);
            lVar1 = (longlong)(local_8 + 0xc) * (longlong)DAT_005a67e4;
            DAT_005a62d8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            lVar1 = (longlong)(local_c + 0x36) * (longlong)DAT_005a67e4;
            DAT_005a62dc = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
            DAT_005a62e4 = DAT_005a67e4 * uVar11 + 0xffff >> 0x10;
            DAT_005a62e0 = DAT_005a67e4 * uVar10 + 0xffff >> 0x10;
            DAT_005a64c8 = piVar12 + 4;
            DAT_005a64cc = uVar10;
            DAT_005a64d0 = uVar11;
            Gfx_DrawImage();
            local_8 = local_8 + uVar10;
            piVar12 = piVar12 + 0xb;
            local_14 = local_14 + 1;
            local_10 = local_10 + 1;
            uVar10 = DAT_005927e4;
          } while (local_14 < DAT_005927e4);
        }
        local_c = local_c + uVar11;
      } while ((local_10 < 6) && (local_18 = local_18 + 1, local_18 < DAT_005927e8));
    }
    Gfx_UnlockSurface();
    Viewport_Set(uVar4,uVar5,uVar6,uVar7,1);
    copy_str32_to_some_global(&DAT_005a67a0);
    DAT_00562c9c = DAT_00562c9c + -1;
  }
  return;
}

