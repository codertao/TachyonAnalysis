
/* (text@ESI, font@EDI, x@EAX, y@EBX, color@CL, style@CH, flags@EDX) clipped to 0x604460..6c */

void __cdecl
Font_DrawStringClipped(char *text,void *font,int x,int y,byte color,byte style,int flags)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined2 in_register_00000006;
  uint uVar5;
  int extraout_ECX;
  uint extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 uVar6;
  undefined4 extraout_EDX_00;
  
  uVar5 = CONCAT22(in_register_00000006,CONCAT11(style,color));
  if (GLBL_some_str == 0) {
    return;
  }
  DAT_004e5ec0 = (undefined1)flags;
  DAT_004e5ec1 = (char)((uint)flags >> 8);
  DAT_004e54a0 = y * DAT_00604490 + x * DAT_0060448c + GLBL_some_str;
  DAT_004e5550 = *(int *)((int)font + 0x14);
  DAT_004e5570 = x;
  DAT_004e5574 = y;
  if (((y < DAT_0060446c) &&
      (DAT_004e556c = (uint)*(byte *)(*(int *)((int)font + 4) + 4),
      DAT_00604464 <= (int)(y + DAT_004e556c))) && (x < DAT_00604468)) {
    FUN_004e666a(uVar5,font);
    if (DAT_00604460 <= DAT_004e5570 + extraout_ECX) {
      uVar3 = uVar5 >> 8 & 0xff;
      if (DAT_00604488 == 0x20) {
        DAT_004e54b4 = (&PTR_LAB_004e553c)[uVar3];
      }
      else if (DAT_00604488 == 0x10) {
        DAT_004e54b4 = (&PTR_LAB_004e5528)[uVar3];
      }
      else {
        DAT_004e54b4 = (&PTR_LAB_004e5514)[uVar3];
      }
      uVar6 = extraout_EDX;
      if (DAT_004e5ec1 != '\0') {
        DAT_005a62e0 = extraout_ECX + 3;
        DAT_005a62c4 = GLBL_some_str;
        DAT_005a62cc = (undefined4)((longlong)(ulonglong)DAT_00604490 / (longlong)DAT_0060448c);
        uVar6 = (undefined4)((longlong)(ulonglong)DAT_00604490 % (longlong)DAT_0060448c);
        DAT_005a62e4 = DAT_004e556c + 2;
        DAT_005a62d8 = DAT_004e5570 + -1;
        DAT_005a62dc = DAT_004e5574 + -1;
        FUN_004ea8ae(font);
      }
LAB_004e6d33:
      uVar1 = DAT_004e54bc;
      cVar2 = *text;
      if (cVar2 != '\0') {
        if (cVar2 == '~') {
          iVar4 = (byte)text[1] - 0x30;
          if ((0x2f < (byte)text[1]) && (iVar4 < 0xb)) {
            DAT_004e5ec3 = (char)iVar4 * '\b';
            text = text + 2;
            DAT_004e54bc = uVar1;
            goto LAB_004e6d33;
          }
          cVar2 = '~';
        }
        if (cVar2 == '\t') {
          DAT_004e54b8 = DAT_004e5570;
          FUN_004e67b3(uVar6,uVar5,font);
          DAT_004e5570 = DAT_004e54b8;
          text = text + 1;
        }
        else {
          FUN_004e6b55();
          text = text + 1;
          iVar4 = (*(ushort *)(DAT_004e54a8 + 2) + 1) - DAT_004e5550;
          DAT_004e5570 = DAT_004e5570 + iVar4;
          DAT_004e54a0 = DAT_004e54a0 + iVar4 * DAT_0060448c;
          uVar5 = extraout_ECX_00;
          uVar6 = extraout_EDX_00;
          DAT_004e54bc = uVar1;
        }
        goto LAB_004e6d33;
      }
    }
  }
  return;
}

