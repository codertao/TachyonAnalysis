
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (pal@ESI, out@EDI) 16 brightness levels x 256 colours in native pixels */

void __cdecl Pix_BuildShadeTable(byte *pal,void *out)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  undefined3 uVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  
  _DAT_004e71c0 = 0x10;
  bVar8 = 0;
  do {
    _DAT_004e71bc = 0x100;
    bVar7 = bVar8;
    pbVar11 = pal;
    do {
      while( true ) {
        while( true ) {
          for (; ((ushort)(byte)(&DAT_004e8a10)[pbVar11[DAT_004e727c]] * (ushort)bVar7 & 0x8000) !=
                 0; bVar7 = bVar7 - 1) {
          }
          bVar2 = (byte)((ushort)((ushort)(byte)(&DAT_004e8a10)[pbVar11[DAT_004e727c]] *
                                 (ushort)bVar7) >> 7);
          uVar5 = (undefined3)((uint)DAT_004e7268 >> 8);
          if (((ushort)(byte)(&DAT_004e8a10)[CONCAT31(uVar5,pbVar11[DAT_004e7294])] * (ushort)bVar7
              & 0x8000) == 0) break;
          bVar7 = bVar7 - 1;
        }
        uVar3 = (undefined1)
                ((ushort)((ushort)(byte)(&DAT_004e8a10)[CONCAT31(uVar5,pbVar11[DAT_004e7294])] *
                         (ushort)bVar7) >> 7);
        uVar6 = (undefined3)((uint)DAT_004e7280 >> 8);
        if (((ushort)(byte)(&DAT_004e8a10)[CONCAT31(uVar6,pbVar11[DAT_004e72ac])] * (ushort)bVar7 &
            0x8000) == 0) break;
        bVar7 = bVar7 - 1;
      }
      uVar4 = (undefined1)
              ((ushort)((ushort)(byte)(&DAT_004e8a10)[CONCAT31(uVar6,pbVar11[DAT_004e72ac])] *
                       (ushort)bVar7) >> 7);
      *(short *)out =
           (short)(CONCAT22((short)((uint)(CONCAT22((short)(((uint)CONCAT11((&DAT_004e8810)[bVar2],
                                                                            bVar2) <<
                                                            ((byte)DAT_004e7268 & 0x1f)) >> 0x10),
                                                    CONCAT11((&DAT_004e8810)[CONCAT31(uVar5,uVar3)],
                                                             uVar3)) << ((byte)DAT_004e7280 & 0x1f))
                                   >> 0x10),CONCAT11((&DAT_004e8810)[CONCAT31(uVar6,uVar4)],uVar4))
                  >> (0x10U - (char)DAT_004e7298 & 0x1f));
      iVar9 = _DAT_004e71c0;
      iVar10 = _DAT_004e71bc;
      pbVar11 = pbVar11 + 3;
      out = (void *)((int)out + 2);
      _DAT_004e71bc = _DAT_004e71bc + -1;
      bVar7 = bVar8;
    } while (_DAT_004e71bc != 0 && 0 < iVar10);
    bVar8 = bVar8 + 8;
    _DAT_004e71c0 = _DAT_004e71c0 + -1;
  } while (_DAT_004e71c0 != 0 && 0 < iVar9);
  _DAT_004e71c0 = 0x10;
  iVar10 = 0;
  do {
    _DAT_004e71bc = 0x100;
    pbVar11 = pal;
    do {
      iVar9 = ((uint)(byte)(&DAT_004e8810)
                           [(uint)(byte)(&DAT_004e8a10)[pbVar11[DAT_004e727c]] +
                            ((int)(-((uint)(byte)(&DAT_004e8a10)[pbVar11[DAT_004e727c]] -
                                    *(int *)(&DAT_004e71f4 + DAT_004e727c * 4)) * iVar10) >> 7)] <<
              8) << ((byte)DAT_004e7268 & 0x1f);
      iVar9 = CONCAT22((short)((uint)iVar9 >> 0x10),
                       CONCAT11((&DAT_004e8810)
                                [(uint)(byte)(&DAT_004e8a10)[pbVar11[DAT_004e7294]] +
                                 ((int)(-((uint)(byte)(&DAT_004e8a10)[pbVar11[DAT_004e7294]] -
                                         *(int *)(&DAT_004e71f4 + DAT_004e7294 * 4)) * iVar10) >> 7)
                                ],(char)iVar9)) << ((byte)DAT_004e7280 & 0x1f);
      *(short *)out =
           (short)(CONCAT22((short)((uint)iVar9 >> 0x10),
                            CONCAT11((&DAT_004e8810)
                                     [(uint)(byte)(&DAT_004e8a10)[pbVar11[DAT_004e72ac]] +
                                      ((int)(-((uint)(byte)(&DAT_004e8a10)[pbVar11[DAT_004e72ac]] -
                                              *(int *)(&DAT_004e71f4 + DAT_004e72ac * 4)) * iVar10)
                                      >> 7)],(char)iVar9)) >> (0x10U - (char)DAT_004e7298 & 0x1f));
      iVar1 = _DAT_004e71c0;
      iVar9 = _DAT_004e71bc;
      pbVar11 = pbVar11 + 3;
      out = (void *)((int)out + 2);
      _DAT_004e71bc = _DAT_004e71bc + -1;
    } while (_DAT_004e71bc != 0 && 0 < iVar9);
    iVar10 = iVar10 + 8;
    _DAT_004e71c0 = _DAT_004e71c0 + -1;
  } while (_DAT_004e71c0 != 0 && 0 < iVar1);
  return;
}

