
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: asm (ESI top, EDI bottom, EBP edge record): clip y to 0x604464..6c, Bresenham-style x
   step/error */

void SwAsm_SetupEdge(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_ESI + 0x1c) + 0x7f >> 7;
  if (iVar2 < DAT_00604464) {
    iVar2 = DAT_00604464;
  }
  unaff_EBP[3] = iVar2;
  iVar3 = *(int *)(unaff_EDI + 0x1c) + 0x7f >> 7;
  if (DAT_0060446c < iVar3) {
    iVar3 = DAT_0060446c;
  }
  *unaff_EBP = iVar3 - iVar2;
  if (iVar3 - iVar2 != 0 && iVar2 <= iVar3) {
    DAT_004e4a54 = *(int *)(unaff_EDI + 0x1c) - *(int *)(unaff_ESI + 0x1c);
    DAT_004e4a58 = *(int *)(unaff_EDI + 0x18) - *(int *)(unaff_ESI + 0x18);
    lVar1 = (longlong)DAT_004e4a54 * (longlong)*(int *)(unaff_ESI + 0x18) +
            ((longlong)(DAT_004e4a58 * 0x80) * (longlong)unaff_EBP[3] -
            (longlong)DAT_004e4a58 * (longlong)*(int *)(unaff_ESI + 0x1c));
    iVar2 = (int)lVar1;
    uVar5 = iVar2 - 1;
    uVar4 = DAT_004e4a54 * 0x80;
    lVar1 = CONCAT44(((int)((ulonglong)lVar1 >> 0x20) - (uint)(iVar2 == 0)) +
                     (uint)CARRY4(uVar4,uVar5),uVar4 + uVar5);
    iVar2 = (int)(lVar1 / (longlong)(int)uVar4);
    iVar3 = (int)(lVar1 % (longlong)(int)uVar4);
    if (iVar3 < 0) {
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + uVar4;
    }
    unaff_EBP[2] = iVar2;
    unaff_EBP[6] = iVar3;
    iVar2 = DAT_004e4a58 << 7;
    iVar6 = DAT_004e4a54 * 0x80;
    unaff_EBP[5] = iVar6;
    iVar3 = iVar2 / iVar6;
    iVar2 = iVar2 % iVar6;
    if (iVar2 < 0) {
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + iVar6;
    }
    unaff_EBP[1] = iVar3;
    unaff_EBP[4] = iVar2;
    if (DAT_004e4b0c != 0) {
      if (*(int *)(unaff_EDI + 0x14) < 0x2000) {
        iVar3 = 0;
        iVar2 = 0x7fffffff;
      }
      else if (*(int *)(unaff_ESI + 0x14) < 0x2000) {
        iVar3 = 0;
        iVar2 = 0x7fffffff;
      }
      else {
        iVar2 = (int)(0xfff00000000 / (longlong)*(int *)(unaff_ESI + 0x14));
        iVar3 = ((int)(0xfff00000000 / (longlong)*(int *)(unaff_EDI + 0x14)) - iVar2) /
                (DAT_004e4a54 + 0x7f >> 7);
      }
      unaff_EBP[0x14] = iVar3;
      iVar3 = *(int *)(unaff_ESI + 0x1c) + 0x7f >> 7;
      unaff_EBP[0x13] = iVar3 * (unaff_EBP[3] - iVar3) + iVar2;
    }
    if (unaff_EBP[0x12] != 0) {
      DAT_004e4a8c = unaff_EBP[2] * 0x80 - *(int *)(unaff_ESI + 0x18);
      DAT_004e4a88 = unaff_EBP[3] * 0x80 - *(int *)(unaff_ESI + 0x1c);
      if ((DAT_004e4a28 & 8) != 0) {
        iVar2 = ((uint)((longlong)DAT_004e4a60 * (longlong)DAT_004e4a8c) >> 7 |
                (int)((ulonglong)((longlong)DAT_004e4a60 * (longlong)DAT_004e4a8c) >> 0x20) << 0x19)
                + ((uint)((longlong)DAT_004e4a68 * (longlong)DAT_004e4a88) >> 7 |
                  (int)((ulonglong)((longlong)DAT_004e4a68 * (longlong)DAT_004e4a88) >> 0x20) <<
                  0x19) + *(int *)(unaff_ESI + 0x20);
        if ((DAT_004e4a28 & 0x2000) != 0) {
          iVar2 = iVar2 - ((0x80 << (0x10U - ((char)DAT_004e4adc - (char)DAT_004e49ac) & 0x1f)) >> 8
                          );
        }
        unaff_EBP[7] = iVar2;
        unaff_EBP[0xc] = unaff_EBP[1] * DAT_004e4a60 + DAT_004e4a68;
        iVar2 = ((uint)((longlong)DAT_004e4a64 * (longlong)DAT_004e4a8c) >> 7 |
                (int)((ulonglong)((longlong)DAT_004e4a64 * (longlong)DAT_004e4a8c) >> 0x20) << 0x19)
                + ((uint)((longlong)DAT_004e4a6c * (longlong)DAT_004e4a88) >> 7 |
                  (int)((ulonglong)((longlong)DAT_004e4a6c * (longlong)DAT_004e4a88) >> 0x20) <<
                  0x19) + *(int *)(unaff_ESI + 0x24);
        if ((DAT_004e4a28 & 0x2000) != 0) {
          iVar2 = iVar2 - ((0x80 << (0x10U - ((char)DAT_004e4adc - (char)DAT_004e49ac) & 0x1f)) >> 8
                          );
        }
        unaff_EBP[8] = iVar2;
        unaff_EBP[0xd] = unaff_EBP[1] * DAT_004e4a64 + DAT_004e4a6c;
      }
      if ((DAT_004e4a28 & 1) != 0) {
        unaff_EBP[9] = (int)(((uint)((longlong)DAT_004e4a70 * (longlong)DAT_004e4a8c) >> 7 |
                             (int)((ulonglong)((longlong)DAT_004e4a70 * (longlong)DAT_004e4a8c) >>
                                  0x20) << 0x19) +
                             ((uint)((longlong)DAT_004e4a74 * (longlong)DAT_004e4a88) >> 7 |
                             (int)((ulonglong)((longlong)DAT_004e4a74 * (longlong)DAT_004e4a88) >>
                                  0x20) << 0x19) + (*(uint *)(unaff_ESI + 0x28) & 0xffff00)) >> 8;
        unaff_EBP[0xe] = unaff_EBP[1] * DAT_004e4a70 + DAT_004e4a74 >> 8;
      }
      if ((DAT_004e4a28 & 1) != 0) {
        unaff_EBP[10] =
             (int)(((uint)((longlong)_DAT_004e4a78 * (longlong)DAT_004e4a8c) >> 7 |
                   (int)((ulonglong)((longlong)_DAT_004e4a78 * (longlong)DAT_004e4a8c) >> 0x20) <<
                   0x19) + ((uint)((longlong)DAT_004e4a7c * (longlong)DAT_004e4a88) >> 7 |
                           (int)((ulonglong)((longlong)DAT_004e4a7c * (longlong)DAT_004e4a88) >>
                                0x20) << 0x19) + (*(uint *)(unaff_ESI + 0x28) >> 8 & 0xff0000)) >> 8
        ;
        unaff_EBP[0xf] = unaff_EBP[1] * _DAT_004e4a78 + DAT_004e4a7c >> 8;
        unaff_EBP[0xb] =
             (int)(((uint)((longlong)_DAT_004e4a80 * (longlong)DAT_004e4a8c) >> 7 |
                   (int)((ulonglong)((longlong)_DAT_004e4a80 * (longlong)DAT_004e4a8c) >> 0x20) <<
                   0x19) + ((uint)((longlong)DAT_004e4a84 * (longlong)DAT_004e4a88) >> 7 |
                           (int)((ulonglong)((longlong)DAT_004e4a84 * (longlong)DAT_004e4a88) >>
                                0x20) << 0x19) + (*(uint *)(unaff_ESI + 0x28) & 0xff) * 0x10000) >>
             8;
        unaff_EBP[0x10] = unaff_EBP[1] * _DAT_004e4a80 + DAT_004e4a84 >> 8;
      }
    }
  }
  return;
}

