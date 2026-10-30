
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e67df(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  undefined4 extraout_EDX_00;
  int unaff_EBX;
  char *unaff_ESI;
  int unaff_EDI;
  
  if (DAT_00604440 == 0) {
    return;
  }
  DAT_004e54a0 = unaff_EBX * DAT_00604490 + in_EAX * DAT_0060448c + DAT_00604440;
  DAT_004e5550 = *(int *)(unaff_EDI + 0x14);
  _DAT_004e5494 = (undefined1 *)register0x00000010;
  DAT_004e54b8 = in_EAX;
  FUN_004e674e();
  uVar3 = extraout_ECX;
  uVar4 = extraout_EDX;
LAB_004e6822:
  do {
    cVar1 = *unaff_ESI;
    if (cVar1 == '\0') {
      return;
    }
    if (cVar1 == '~') {
      iVar2 = (byte)unaff_ESI[1] - 0x30;
      if ((0x2f < (byte)unaff_ESI[1]) && (iVar2 < 0xb)) {
        DAT_004e5ec3 = (char)iVar2 * '\b';
        unaff_ESI = unaff_ESI + 2;
        goto LAB_004e6822;
      }
      cVar1 = '~';
    }
    if (cVar1 == '\t') {
      FUN_004e67b3(uVar4,uVar3,unaff_EDI);
      unaff_ESI = unaff_ESI + 1;
    }
    else {
      FUN_004e66d9();
      unaff_ESI = unaff_ESI + 1;
      iVar2 = (*(ushort *)(DAT_004e54a8 + 2) + 1) - DAT_004e5550;
      DAT_004e54b8 = DAT_004e54b8 + iVar2;
      DAT_004e54a0 = DAT_004e54a0 + iVar2 * DAT_0060448c;
      uVar3 = extraout_ECX_00;
      uVar4 = extraout_EDX_00;
    }
  } while( true );
}

