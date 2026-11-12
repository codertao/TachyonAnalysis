
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: asm, reg-passed args */

void SwAsm_DrawLine(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined6 uVar10;
  undefined8 uVar11;
  int extraout_ECX;
  int iVar12;
  int extraout_EDX;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  ushort uVar13;
  undefined4 uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  undefined1 in_MM2_Ba;
  undefined1 in_MM2_Bb;
  undefined1 in_MM2_Bc;
  undefined1 in_MM2_Bd;
  undefined8 uVar18;
  
  if (GLBL_some_str == 0) {
    return;
  }
  if (DAT_00604488 == 0x20) {
    uVar14 = SwAsm_LineCore();
    uVar1 = *(undefined4 *)(&DAT_005a6440 + _DAT_005a6308 * 4);
    bVar9 = (byte)((uint)uVar1 >> 0x18);
    bVar8 = (byte)((uint)uVar1 >> 0x10);
    bVar7 = (byte)((uint)uVar1 >> 8);
    DAT_004e8f10._0_4_ = (uint)CONCAT21((ushort)DAT_005a631c << 8,DAT_005a631c) << 7;
    uVar11 = CONCAT44((int)DAT_004e8f10,(int)DAT_004e8f10);
    iVar12 = extraout_ECX;
    _DAT_004e8c3c = unaff_EBP;
    DAT_004e8f10._4_4_ = (int)DAT_004e8f10;
    while( true ) {
      uVar2 = *unaff_EDI;
      uVar13 = CONCAT11((char)uVar2,(char)uVar14) >> 1;
      uVar15 = CONCAT11((char)((uint)uVar2 >> 8),(char)((uint)uVar14 >> 8)) >> 1;
      uVar16 = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar14 >> 0x10)) >> 1;
      uVar17 = CONCAT11((char)((uint)uVar2 >> 0x18),(char)((uint)uVar14 >> 0x18)) >> 1;
      sVar3 = CONCAT11((byte)uVar1 >> 1,(char)(CONCAT11((byte)uVar1,in_MM2_Ba) >> 1));
      uVar14 = CONCAT13(bVar7 >> 1,CONCAT12((char)(CONCAT11(bVar7,in_MM2_Bb) >> 1),sVar3));
      uVar10 = CONCAT15(bVar8 >> 1,CONCAT14((char)(CONCAT11(bVar8,in_MM2_Bc) >> 1),uVar14));
      uVar18 = pmulhw(CONCAT26((short)(CONCAT17(bVar9 >> 1,
                                                CONCAT16((char)(CONCAT11(bVar9,in_MM2_Bd) >> 1),
                                                         uVar10)) >> 0x30) - uVar17,
                               CONCAT24((short)((uint6)uVar10 >> 0x20) - uVar16,
                                        CONCAT22((short)((uint)uVar14 >> 0x10) - uVar15,
                                                 sVar3 - uVar13))),uVar11);
      uVar18 = psllw(uVar18,1);
      uVar18 = psraw(CONCAT26((short)((ulonglong)uVar18 >> 0x30) + uVar17,
                              CONCAT24((short)((ulonglong)uVar18 >> 0x20) + uVar16,
                                       CONCAT22((short)((ulonglong)uVar18 >> 0x10) + uVar15,
                                                (short)uVar18 + uVar13))),7);
      sVar3 = (short)uVar18;
      sVar4 = (short)((ulonglong)uVar18 >> 0x10);
      sVar5 = (short)((ulonglong)uVar18 >> 0x20);
      sVar6 = (short)((ulonglong)uVar18 >> 0x30);
      *unaff_EDI = CONCAT13((0 < sVar6) * (sVar6 < 0x100) * (char)((ulonglong)uVar18 >> 0x30) -
                            (0xff < sVar6),
                            CONCAT12((0 < sVar5) * (sVar5 < 0x100) *
                                     (char)((ulonglong)uVar18 >> 0x20) - (0xff < sVar5),
                                     CONCAT11((0 < sVar4) * (sVar4 < 0x100) *
                                              (char)((ulonglong)uVar18 >> 0x10) - (0xff < sVar4),
                                              (0 < sVar3) * (sVar3 < 0x100) * (char)uVar18 -
                                              (0xff < sVar3))));
      unaff_EDI = (undefined4 *)((int)unaff_EDI + extraout_EDX);
      iVar12 = iVar12 + -1;
      if (iVar12 < 0) break;
      unaff_EBX = unaff_EBX - unaff_ESI;
      uVar14 = CONCAT22(uVar15,uVar13);
      if (unaff_EBX < 0) {
        unaff_EDI = (undefined4 *)((int)unaff_EDI + _DAT_004e8c3c);
        unaff_EBX = unaff_EBX + _DAT_004e8c38;
        uVar14 = CONCAT22(uVar15,uVar13);
      }
    }
    return;
  }
  return;
}

