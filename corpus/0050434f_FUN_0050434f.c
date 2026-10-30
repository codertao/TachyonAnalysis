
void __fastcall FUN_0050434f(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  undefined4 in_EAX;
  uint unaff_EBX;
  int unaff_EBP;
  undefined4 *unaff_EDI;
  ushort in_MM0_Wa;
  ushort in_MM0_Wb;
  ushort in_MM0_Wc;
  ushort in_MM0_Wd;
  undefined8 uVar9;
  undefined1 in_MM3_Ba;
  byte in_MM3_Bb;
  byte bVar10;
  undefined1 in_MM3_Bc;
  undefined1 uVar11;
  byte in_MM3_Bd;
  byte bVar12;
  undefined8 in_MM6;
  undefined8 uVar13;
  undefined8 in_MM7;
  undefined8 uVar14;
  
  out((short)param_2,in_EAX);
  *(undefined1 *)unaff_EDI = *(undefined1 *)unaff_EDI;
  uVar13 = pmulhw(in_MM6,CONCAT26(in_MM0_Wd >> 1,
                                  CONCAT24(in_MM0_Wc >> 1,CONCAT22(in_MM0_Wb >> 1,in_MM0_Wa >> 1))))
  ;
  uVar14 = pmulhw(in_MM7,CONCAT26(in_MM0_Wd >> 1,
                                  CONCAT24(in_MM0_Wc >> 1,CONCAT22(in_MM0_Wb >> 1,in_MM0_Wa >> 1))))
  ;
  uVar13 = psllw(uVar13,1);
  uVar14 = psllw(uVar14,1);
  do {
    uVar1 = *unaff_EDI;
    bVar7 = (byte)((uint)uVar1 >> 0x18);
    bVar6 = (byte)((uint)uVar1 >> 0x10);
    bVar12 = (byte)((uint)uVar1 >> 8);
    in_MM3_Ba = (undefined1)(CONCAT11((byte)uVar1,in_MM3_Ba) >> 2);
    bVar10 = (byte)uVar1 >> 2;
    uVar11 = (undefined1)(CONCAT11(bVar12,in_MM3_Bb) >> 2);
    bVar12 = bVar12 >> 2;
    uVar9 = pmulhw(*(undefined8 *)
                    (&DAT_00502980 +
                    (uint)*(byte *)(unaff_EBP + ((param_2 >> 0x19) << 7 | unaff_EBX >> 0x19)) * 8),
                   uVar13);
    unaff_EBX = unaff_EBX + DAT_004e4a60;
    param_2 = param_2 + DAT_004e4a64;
    uVar9 = paddsw(uVar9,CONCAT17(bVar7 >> 2,
                                  CONCAT16((char)(CONCAT11(bVar7,in_MM3_Bd) >> 2),
                                           CONCAT15(bVar6 >> 2,
                                                    CONCAT14((char)(CONCAT11(bVar6,in_MM3_Bc) >> 2),
                                                             CONCAT13(bVar12,CONCAT12(uVar11,
                                                  CONCAT11(bVar10,in_MM3_Ba))))))));
    uVar13 = CONCAT26((short)((ulonglong)uVar13 >> 0x30) + (short)((ulonglong)uVar14 >> 0x30),
                      CONCAT24((short)((ulonglong)uVar13 >> 0x20) +
                               (short)((ulonglong)uVar14 >> 0x20),
                               CONCAT22((short)((ulonglong)uVar13 >> 0x10) +
                                        (short)((ulonglong)uVar14 >> 0x10),
                                        (short)uVar13 + (short)uVar14)));
    uVar9 = psraw(uVar9,6);
    sVar2 = (short)uVar9;
    sVar3 = (short)((ulonglong)uVar9 >> 0x10);
    sVar4 = (short)((ulonglong)uVar9 >> 0x20);
    sVar5 = (short)((ulonglong)uVar9 >> 0x30);
    *unaff_EDI = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * (char)((ulonglong)uVar9 >> 0x30) -
                          (0xff < sVar5),
                          CONCAT12((0 < sVar4) * (sVar4 < 0x100) * (char)((ulonglong)uVar9 >> 0x20)
                                   - (0xff < sVar4),
                                   CONCAT11((0 < sVar3) * (sVar3 < 0x100) *
                                            (char)((ulonglong)uVar9 >> 0x10) - (0xff < sVar3),
                                            (0 < sVar2) * (sVar2 < 0x100) * (char)uVar9 -
                                            (0xff < sVar2))));
    iVar8 = DAT_004e4994;
    DAT_004e4994 = DAT_004e4994 + -1;
    unaff_EDI = unaff_EDI + 1;
    in_MM3_Bb = bVar10;
    in_MM3_Bc = uVar11;
    in_MM3_Bd = bVar12;
  } while (DAT_004e4994 != 0 && 0 < iVar8);
  return;
}

