
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (text@ESI, font@EDI, x@EAX, y@EBX, color@CL, style@CH) unclipped; "~N" colour codes */

void __cdecl Font_DrawString(char *text,void *font,int x,int y,byte color,byte style)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  undefined4 extraout_EDX_00;
  
  if (GLBL_some_str == 0) {
    return;
  }
  DAT_004e54a0 = y * DAT_00604490 + x * DAT_0060448c + GLBL_some_str;
  DAT_004e5550 = *(int *)((int)font + 0x14);
  _DAT_004e5494 = (undefined1 *)register0x00000010;
  DAT_004e54b8 = x;
  FUN_004e674e();
  uVar3 = extraout_ECX;
  uVar4 = extraout_EDX;
LAB_004e6822:
  do {
    cVar1 = *text;
    if (cVar1 == '\0') {
      return;
    }
    if (cVar1 == '~') {
      iVar2 = (byte)text[1] - 0x30;
      if ((0x2f < (byte)text[1]) && (iVar2 < 0xb)) {
        DAT_004e5ec3 = (char)iVar2 * '\b';
        text = text + 2;
        goto LAB_004e6822;
      }
      cVar1 = '~';
    }
    if (cVar1 == '\t') {
      FUN_004e67b3(uVar4,uVar3,font);
      text = text + 1;
    }
    else {
      FUN_004e66d9();
      text = text + 1;
      iVar2 = (*(ushort *)(DAT_004e54a8 + 2) + 1) - DAT_004e5550;
      DAT_004e54b8 = DAT_004e54b8 + iVar2;
      DAT_004e54a0 = DAT_004e54a0 + iVar2 * DAT_0060448c;
      uVar3 = extraout_ECX_00;
      uVar4 = extraout_EDX_00;
    }
  } while( true );
}

