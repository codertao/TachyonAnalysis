
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e5ed0(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined2 *unaff_EBP;
  int unaff_EDI;
  
  DAT_004e54b8 = 0;
  DAT_004e5ebe = '\0';
  _DAT_004e54c8 = 0;
  _DAT_004e54c4 = *(int *)(unaff_EDI + 8);
  do {
    pbVar4 = (byte *)(DAT_004e54b8 + _DAT_004e5554);
    DAT_004e5ebf = '\0';
    DAT_004e54bc = 0;
    _DAT_004e54c0 = -1;
    iVar3 = DAT_004e556c;
    do {
      iVar2 = DAT_004e54bc;
      bVar1 = *pbVar4;
      if (bVar1 == 3) {
        DAT_004e5ebf = '\x01';
        *pbVar4 = 0;
      }
      else if (bVar1 < 8) {
        if (bVar1 == 2) {
          *(short *)(unaff_EDI + 0x1a) = (short)DAT_004e54bc;
          *pbVar4 = 0;
        }
        else if (bVar1 == 4) {
          DAT_004e5550 = DAT_004e5550 + 1;
        }
        else if (bVar1 == 5) {
          *(int *)(unaff_EDI + 0x1c) = *(int *)(unaff_EDI + 0x1c) + 1;
          _DAT_004e54c0 = iVar2;
        }
      }
      else {
        DAT_004e5ebf = '\x01';
      }
      pbVar4 = pbVar4 + *(int *)(unaff_EDI + 8);
      DAT_004e54bc = DAT_004e54bc + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if ((DAT_004e5ebf != '\0') && (DAT_004e5ebe != '\0')) {
      DAT_004e54cc = DAT_004e54cc + 1;
    }
    if ((DAT_004e5ebf != '\0') && (DAT_004e5ebe == '\0')) {
      DAT_004e5570 = DAT_004e54b8;
      DAT_004e54cc = 0;
      DAT_004e5ebe = '\x01';
    }
    if ((DAT_004e5ebf == '\0') && (DAT_004e5ebe != '\0')) {
      *unaff_EBP = (short)DAT_004e5570;
      unaff_EBP[1] = (short)DAT_004e54cc + 1;
      unaff_EBP[3] = (short)DAT_004e5564;
      *(char *)(unaff_EBP + 2) = (char)DAT_004e556c;
      *(undefined1 *)((int)unaff_EBP + 5) = 1;
      unaff_EBP = unaff_EBP + 4;
      DAT_004e54d0 = DAT_004e54d0 + 1;
      DAT_004e5ebe = '\0';
    }
    DAT_004e54b8 = DAT_004e54b8 + 1;
    _DAT_004e54c4 = _DAT_004e54c4 + -1;
  } while (_DAT_004e54c4 != 0);
  return;
}

