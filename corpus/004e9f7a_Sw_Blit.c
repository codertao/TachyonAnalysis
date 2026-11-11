
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* copy source surface 0x5a62c0 to the target, bpp 0x5a62fc */

void __cdecl Sw_Blit(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  bool bVar7;
  
  bVar7 = false;
  if (DAT_005a62c4 != 0) {
    FUN_004e9ee0();
    if (!bVar7) {
      iVar2 = DAT_005a62c8 * DAT_005a62d4 + DAT_005a62d0;
      if (DAT_005a62fc < 0x11) {
        if (8 < DAT_005a62fc) {
          iVar2 = iVar2 * 2;
        }
      }
      else {
        iVar2 = iVar2 * 4;
      }
      puVar5 = (ushort *)(DAT_005a62c0 + iVar2);
      puVar6 = (ushort *)
               (DAT_005a62c4 + (DAT_005a62cc * DAT_005a62dc + DAT_005a62d8) * DAT_0060448c);
      DAT_004e9e88 = DAT_005a62c8 - DAT_005a62e0;
      _DAT_004e9e8c = (DAT_005a62cc - DAT_005a62e0) * DAT_0060448c;
      if ((DAT_00604488 == 8) && (8 < DAT_005a62fc)) {
        _DAT_004e9e8c = _DAT_004e9e8c - DAT_005a62e0;
      }
      iVar2 = DAT_005a62e0;
      iVar4 = DAT_005a62e4;
      if (DAT_005a62fc < 9) {
        do {
          do {
            if ((char)*puVar5 != '\0') {
              *(char *)puVar6 = (char)*puVar5;
            }
            puVar5 = (ushort *)((int)puVar5 + 1);
            puVar6 = (ushort *)((int)puVar6 + DAT_0060448c);
            iVar3 = iVar2 + -1;
            bVar7 = 0 < iVar2;
            iVar2 = iVar3;
          } while (iVar3 != 0 && bVar7);
          puVar5 = (ushort *)((int)puVar5 + DAT_004e9e88);
          puVar6 = (ushort *)((int)puVar6 + _DAT_004e9e8c);
          iVar3 = iVar4 + -1;
          bVar7 = 0 < iVar4;
          iVar2 = DAT_005a62e0;
          iVar4 = iVar3;
        } while (iVar3 != 0 && bVar7);
      }
      else if (DAT_005a62fc == 0x10) {
        do {
          do {
            if (*puVar5 != 0) {
              *puVar6 = *puVar5;
            }
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
            iVar3 = iVar2 + -1;
            bVar7 = 0 < iVar2;
            iVar2 = iVar3;
          } while (iVar3 != 0 && bVar7);
          puVar5 = puVar5 + DAT_004e9e88;
          puVar6 = (ushort *)((int)puVar6 + _DAT_004e9e8c);
          iVar3 = iVar4 + -1;
          bVar7 = 0 < iVar4;
          iVar2 = DAT_005a62e0;
          iVar4 = iVar3;
        } while (iVar3 != 0 && bVar7);
      }
      else if (DAT_005a62fc == 0xf) {
        do {
          do {
            uVar1 = *puVar5;
            if (uVar1 != 0) {
              *puVar6 = (short)*(undefined4 *)(&DAT_004e76bc + (uint)(uVar1 >> 8) * 4) +
                        (short)*(undefined4 *)(&DAT_004e72bc + (uVar1 & 0xff) * 4);
            }
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
            iVar3 = iVar2 + -1;
            bVar7 = 0 < iVar2;
            iVar2 = iVar3;
          } while (iVar3 != 0 && bVar7);
          puVar5 = puVar5 + DAT_004e9e88;
          puVar6 = (ushort *)((int)puVar6 + _DAT_004e9e8c);
          iVar3 = iVar4 + -1;
          bVar7 = 0 < iVar4;
          iVar2 = DAT_005a62e0;
          iVar4 = iVar3;
        } while (iVar3 != 0 && bVar7);
      }
      else if (DAT_005a62fc == 0x20) {
        if (DAT_0060448c == 4) {
          DAT_004e9e88 = DAT_004e9e88 * 4;
          do {
            do {
              if (*(int *)puVar5 != 0) {
                *(int *)puVar6 = *(int *)puVar5;
              }
              puVar5 = puVar5 + 2;
              puVar6 = puVar6 + 2;
              iVar3 = iVar2 + -1;
              bVar7 = 0 < iVar2;
              iVar2 = iVar3;
            } while (iVar3 != 0 && bVar7);
            puVar5 = (ushort *)((int)puVar5 + DAT_004e9e88);
            puVar6 = (ushort *)((int)puVar6 + _DAT_004e9e8c);
            iVar3 = iVar4 + -1;
            bVar7 = 0 < iVar4;
            iVar2 = DAT_005a62e0;
            iVar4 = iVar3;
          } while (iVar3 != 0 && bVar7);
        }
        else {
          DAT_004e9e88 = DAT_004e9e88 * 4;
          do {
            do {
              if (*(int *)puVar5 != 0) {
                *(int *)puVar6 = *(int *)puVar5;
              }
              puVar5 = puVar5 + 2;
              puVar6 = (ushort *)((int)puVar6 + 3);
              iVar3 = iVar2 + -1;
              bVar7 = 0 < iVar2;
              iVar2 = iVar3;
            } while (iVar3 != 0 && bVar7);
            puVar5 = (ushort *)((int)puVar5 + DAT_004e9e88);
            puVar6 = (ushort *)((int)puVar6 + _DAT_004e9e8c);
            iVar3 = iVar4 + -1;
            bVar7 = 0 < iVar4;
            iVar2 = DAT_005a62e0;
            iVar4 = iVar3;
          } while (iVar3 != 0 && bVar7);
        }
      }
    }
    return;
  }
  return;
}

