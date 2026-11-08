
void __fastcall FUN_004e6bf9(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  uint extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 uVar5;
  undefined4 extraout_EDX_00;
  int unaff_EBX;
  char *unaff_ESI;
  int unaff_EDI;
  uint extraout_var;
  
  if (GLBL_some_str == 0) {
    return;
  }
  DAT_004e5ec0 = (undefined1)param_2;
  DAT_004e5ec1 = (char)((uint)param_2 >> 8);
  DAT_004e54a0 = unaff_EBX * DAT_00604490 + in_EAX * DAT_0060448c + GLBL_some_str;
  DAT_004e5550 = *(int *)(unaff_EDI + 0x14);
  DAT_004e5570 = in_EAX;
  DAT_004e5574 = unaff_EBX;
  if (((unaff_EBX < DAT_0060446c) &&
      (DAT_004e556c = (uint)*(byte *)(*(int *)(unaff_EDI + 4) + 4),
      DAT_00604464 <= (int)(unaff_EBX + DAT_004e556c))) && (in_EAX < DAT_00604468)) {
    FUN_004e666a();
    if (DAT_00604460 <= DAT_004e5570 + extraout_ECX) {
      uVar3 = extraout_var >> 8 & 0xff;
      if (DAT_00604488 == 0x20) {
        DAT_004e54b4 = (&PTR_LAB_004e553c)[uVar3];
      }
      else if (DAT_00604488 == 0x10) {
        DAT_004e54b4 = (&PTR_LAB_004e5528)[uVar3];
      }
      else {
        DAT_004e54b4 = (&PTR_LAB_004e5514)[uVar3];
      }
      uVar3 = extraout_var;
      uVar5 = extraout_EDX;
      if (DAT_004e5ec1 != '\0') {
        DAT_005a62e0 = extraout_ECX + 3;
        DAT_005a62c4 = GLBL_some_str;
        DAT_005a62cc = (undefined4)((longlong)(ulonglong)DAT_00604490 / (longlong)DAT_0060448c);
        uVar5 = (undefined4)((longlong)(ulonglong)DAT_00604490 % (longlong)DAT_0060448c);
        DAT_005a62e4 = DAT_004e556c + 2;
        DAT_005a62d8 = DAT_004e5570 + -1;
        DAT_005a62dc = DAT_004e5574 + -1;
        FUN_004ea8ae(unaff_EDI);
      }
LAB_004e6d33:
      uVar1 = DAT_004e54bc;
      cVar2 = *unaff_ESI;
      if (cVar2 != '\0') {
        if (cVar2 == '~') {
          iVar4 = (byte)unaff_ESI[1] - 0x30;
          if ((0x2f < (byte)unaff_ESI[1]) && (iVar4 < 0xb)) {
            DAT_004e5ec3 = (char)iVar4 * '\b';
            unaff_ESI = unaff_ESI + 2;
            DAT_004e54bc = uVar1;
            goto LAB_004e6d33;
          }
          cVar2 = '~';
        }
        if (cVar2 == '\t') {
          DAT_004e54b8 = DAT_004e5570;
          FUN_004e67b3(uVar5,uVar3,unaff_EDI);
          DAT_004e5570 = DAT_004e54b8;
          unaff_ESI = unaff_ESI + 1;
        }
        else {
          FUN_004e6b55();
          unaff_ESI = unaff_ESI + 1;
          iVar4 = (*(ushort *)(DAT_004e54a8 + 2) + 1) - DAT_004e5550;
          DAT_004e5570 = DAT_004e5570 + iVar4;
          DAT_004e54a0 = DAT_004e54a0 + iVar4 * DAT_0060448c;
          uVar3 = extraout_ECX_00;
          uVar5 = extraout_EDX_00;
          DAT_004e54bc = uVar1;
        }
        goto LAB_004e6d33;
      }
    }
  }
  return;
}

