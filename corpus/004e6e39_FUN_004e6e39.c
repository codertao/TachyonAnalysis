
void FUN_004e6e39(void)

{
  undefined1 *puVar1;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  undefined4 *unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  DAT_004e54cc = 0;
  DAT_004e5ec2 = '\0';
  *(undefined2 *)((int)unaff_EBP + 6) = 1;
  DAT_004e54d4 = (undefined1 *)*unaff_EBP;
LAB_004e6e53:
  do {
    iVar2 = FUN_004e6dc8();
    iVar3 = iVar2 + DAT_004e54cc;
    if (*(short *)(unaff_EBP + 1) < (short)iVar3) {
      *(short *)((int)unaff_EBP + 6) = *(short *)((int)unaff_EBP + 6) + 1;
      puVar1 = DAT_004e54d4;
      DAT_004e54cc = iVar2;
      if (extraout_ECX != 0) {
        iVar2 = extraout_ECX;
        if ((DAT_004e5ec4 == '\0') ||
           (iVar2 = extraout_ECX + -2, DAT_004e5498 = extraout_ECX, iVar2 != 0 && 1 < extraout_ECX))
        {
          DAT_004e5498 = extraout_ECX;
          *DAT_004e54d4 = 0;
          FUN_004be0e0(puVar1 + 1,unaff_ESI,iVar2,unaff_EDI);
        }
        iVar2 = DAT_004e5498 + 1;
        if (DAT_004e5ec4 != '\0') {
          iVar2 = DAT_004e5498 + -1;
        }
        DAT_004e54d4 = DAT_004e54d4 + iVar2;
        goto joined_r0x004e6f1e;
      }
    }
    else if (extraout_ECX != 0) {
      iVar2 = extraout_ECX;
      DAT_004e54cc = iVar3;
      if ((DAT_004e5ec4 == '\0') ||
         (iVar2 = extraout_ECX + -2, DAT_004e5498 = extraout_ECX, iVar2 != 0 && 1 < extraout_ECX)) {
        DAT_004e5498 = extraout_ECX;
        FUN_004be0e0(DAT_004e54d4,unaff_ESI,iVar2,unaff_EDI);
      }
      iVar2 = DAT_004e5498;
      if (DAT_004e5ec4 != '\0') {
        iVar2 = DAT_004e5498 + -2;
      }
      DAT_004e54d4 = DAT_004e54d4 + iVar2;
joined_r0x004e6f1e:
      unaff_ESI = unaff_ESI + DAT_004e5498;
      if (DAT_004e5ec4 == '\x01') {
        *(short *)((int)unaff_EBP + 6) = *(short *)((int)unaff_EBP + 6) + 1;
        *DAT_004e54d4 = 0;
        DAT_004e54d4 = DAT_004e54d4 + 1;
        DAT_004e54cc = 0;
        goto LAB_004e6e53;
      }
    }
    if (DAT_004e5ec2 == '\x01') {
      *DAT_004e54d4 = 0;
      return;
    }
  } while( true );
}

