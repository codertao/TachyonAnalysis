
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void ShipBuy_DrawStatBars(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_c;
  
  uVar3 = DAT_005a6810;
  if (DAT_0056f3e0 != 0) {
    Gfx_Lock(1);
    DAT_005a62d0 = 0;
    DAT_005a62d4 = 0;
    if ((char)DAT_00556ef0 != '\0') {
      piVar4 = &DAT_00556f94;
      do {
        iVar2 = *piVar4;
        if ((iVar2 == 0) || (piVar4[1] == 0)) break;
        if (*(int *)(iVar2 + 0x1650) != 0) {
          Gfx_SelectPalRef(*(int *)(iVar2 + 0x1650),0);
        }
        if ((iVar2 != -0x50) && (*(int *)(iVar2 + 0x60) != 0)) {
          *(undefined4 *)(iVar2 + 0x6c) = 0x20008;
          local_c = (int)(longlong)
                         ROUND((float)(*(int *)(piVar4[1] + 0x60) + -5) * (float)piVar4[-6] +
                               _DAT_0052e9a0);
          DAT_005a62d8 = (uint)((longlong)piVar4[-9] * (longlong)DAT_005a67e4) >> 0x10 |
                         (int)((ulonglong)((longlong)piVar4[-9] * (longlong)DAT_005a67e4) >> 0x20)
                         << 0x10;
          DAT_005a62dc = (uint)((longlong)piVar4[-8] * (longlong)DAT_005a67e4) >> 0x10 |
                         (int)((ulonglong)((longlong)piVar4[-8] * (longlong)DAT_005a67e4) >> 0x20)
                         << 0x10;
          DAT_005a62e0 = DAT_005a67e4 * local_c + 0xffff >> 0x10;
          DAT_005a62e4 = *(int *)(piVar4[1] + 100) * DAT_005a67e4 + 0xffff >> 0x10;
          DAT_005a64cc = local_c;
          DAT_005a64d0 = *(undefined4 *)(piVar4[1] + 100);
          DAT_005a64c0 = *(undefined4 *)(iVar2 + 0x6c);
          DAT_005a64c8 = iVar2 + 0x60;
          *(int *)(iVar2 + 100) = (piVar4[-3] << 8 | piVar4[-2]) << 8 | piVar4[-1];
        }
        Gfx_DrawImage();
        piVar1 = piVar4 + 2;
        piVar4 = piVar4 + 0x2b;
      } while ((char)*piVar1 != '\0');
    }
    Gfx_Lock(uVar3);
  }
  return;
}

