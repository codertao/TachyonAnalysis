
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_004e694b(undefined4 param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  int unaff_EBX;
  undefined4 *unaff_EBP;
  undefined4 unaff_EDI;
  
  if (GLBL_some_str == 0) {
    return in_EAX;
  }
  if (DAT_004e5ec6 == '\0') {
    DAT_004e5ec3 = '\0';
  }
  else {
    DAT_004e5ec3 = DAT_004e5ec6;
  }
  if (param_2 == 0) {
    _DAT_004e54c4 = (uint)*(ushort *)((int)unaff_EBP + 6);
  }
  else {
    uVar1 = (uint)*(ushort *)((int)unaff_EBP + 6) - unaff_EBX;
    _DAT_004e54c4 = param_2;
    if ((int)uVar1 < (int)param_2) {
      _DAT_004e54c4 = uVar1;
    }
  }
  DAT_004e54bc = (uint)*(ushort *)((int)unaff_EBP + 10);
  DAT_004e54d4 = (char *)*unaff_EBP;
  DAT_004e5498 = param_1;
  DAT_004e5578 = unaff_EBX;
  do {
    if ((*DAT_004e54d4 != '\0') && (DAT_004e5578 == 0)) {
      FUN_004e67df(unaff_EBP,unaff_EDI);
    }
    uVar1 = _DAT_004e54c4;
    if (DAT_004e5578 == 0) {
      DAT_004e54bc = DAT_004e54bc + *(ushort *)(unaff_EBP + 3);
      _DAT_004e54c4 = _DAT_004e54c4 - 1;
      if (_DAT_004e54c4 == 0 || (int)uVar1 < 1) {
        DAT_004e5ec6 = 0;
        return (uint)*(ushort *)(unaff_EBP + 3);
      }
    }
    else {
      DAT_004e5578 = DAT_004e5578 + -1;
    }
    for (; *DAT_004e54d4 != '\0'; DAT_004e54d4 = DAT_004e54d4 + 1) {
    }
    DAT_004e54d4 = DAT_004e54d4 + 1;
  } while( true );
}

