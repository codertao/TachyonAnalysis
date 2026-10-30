
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e9aa1(int param_1,int param_2)

{
  ulonglong uVar1;
  int in_EAX;
  int unaff_EBX;
  uint unaff_EBP;
  uint uVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  
  if (DAT_00604440 == 0) {
    return;
  }
  if ((unaff_EBP & 2) == 0) {
    if ((unaff_EBP & 4) == 0) {
      DAT_004e96f4 = 1;
    }
  }
  else {
    DAT_004e96f4 = 0;
  }
  uVar2 = unaff_EBP & 1;
  if (DAT_00604488 == 0x10) {
    DAT_004e96f0 = (&PTR_LAB_004e9710)[uVar2];
  }
  else if (DAT_00604488 == 0x20) {
    DAT_004e96f0 = (&PTR_LAB_004e9718)[uVar2];
  }
  else {
    DAT_004e96f0 = (&PTR_LAB_004e9708)[uVar2];
  }
  if (in_EAX < DAT_00604460) {
    if (param_1 < DAT_00604460) {
      DAT_004e96d0 = in_EAX;
      DAT_004e96d4 = param_1;
      DAT_004e96d8 = unaff_EBX;
      DAT_004e96dc = param_2;
      DAT_004e96e8 = unaff_ESI;
      DAT_004e96ec = unaff_EDI;
      _DAT_004e9700 = unaff_EBP;
      return;
    }
    uVar1 = (longlong)(param_1 - DAT_00604460) * (longlong)-(unaff_EBX - param_2);
    uVar2 = (uint)(uVar1 >> 0x20);
    if ((longlong)(int)uVar1 == uVar1) {
      uVar2 = (int)uVar1 >> 0x1f;
    }
    DAT_004e96d8 = param_2 - (int)((longlong)((ulonglong)uVar2 << 0x20 | uVar1 & 0xffffffff) /
                                  (longlong)(param_1 - in_EAX));
    DAT_004e96d0 = DAT_00604460;
  }
  else {
    DAT_004e96d0 = in_EAX;
    DAT_004e96d8 = unaff_EBX;
    if (DAT_00604468 <= in_EAX) {
      if (DAT_00604468 <= param_1) {
        DAT_004e96d4 = param_1;
        DAT_004e96dc = param_2;
        DAT_004e96e8 = unaff_ESI;
        DAT_004e96ec = unaff_EDI;
        _DAT_004e9700 = unaff_EBP;
        return;
      }
      uVar1 = (longlong)((param_1 - DAT_00604468) + 1) * (longlong)-(unaff_EBX - param_2);
      uVar2 = (uint)(uVar1 >> 0x20);
      if ((longlong)(int)uVar1 == uVar1) {
        uVar2 = (int)uVar1 >> 0x1f;
      }
      DAT_004e96d8 = param_2 - (int)((longlong)((ulonglong)uVar2 << 0x20 | uVar1 & 0xffffffff) /
                                    (longlong)(param_1 - in_EAX));
      DAT_004e96d0 = DAT_00604468 + -1;
    }
  }
  if (param_1 < DAT_00604460) {
    if (DAT_004e96d0 < DAT_00604460) {
      DAT_004e96d4 = param_1;
      DAT_004e96dc = param_2;
      DAT_004e96e8 = unaff_ESI;
      DAT_004e96ec = unaff_EDI;
      _DAT_004e9700 = unaff_EBP;
      return;
    }
    uVar1 = (longlong)(DAT_004e96d0 - DAT_00604460) * (longlong)(DAT_004e96d8 - param_2);
    uVar2 = (uint)(uVar1 >> 0x20);
    if ((longlong)(int)uVar1 == uVar1) {
      uVar2 = (int)uVar1 >> 0x1f;
    }
    DAT_004e96dc = DAT_004e96d8 -
                   (int)((longlong)((ulonglong)uVar2 << 0x20 | uVar1 & 0xffffffff) /
                        (longlong)-(param_1 - DAT_004e96d0));
    DAT_004e96d4 = DAT_00604460;
  }
  else {
    DAT_004e96d4 = param_1;
    DAT_004e96dc = param_2;
    if (DAT_00604468 <= param_1) {
      if (DAT_00604468 <= DAT_004e96d0) {
        DAT_004e96e8 = unaff_ESI;
        DAT_004e96ec = unaff_EDI;
        _DAT_004e9700 = unaff_EBP;
        return;
      }
      uVar1 = (longlong)((DAT_004e96d0 - DAT_00604468) + 1) * (longlong)(DAT_004e96d8 - param_2);
      uVar2 = (uint)(uVar1 >> 0x20);
      if ((longlong)(int)uVar1 == uVar1) {
        uVar2 = (int)uVar1 >> 0x1f;
      }
      DAT_004e96dc = DAT_004e96d8 -
                     (int)((longlong)((ulonglong)uVar2 << 0x20 | uVar1 & 0xffffffff) /
                          (longlong)-(param_1 - DAT_004e96d0));
      DAT_004e96d4 = DAT_00604468 + -1;
    }
  }
  if (DAT_004e96d8 < DAT_00604464) {
    if (DAT_004e96dc < DAT_00604464) {
      DAT_004e96e8 = unaff_ESI;
      DAT_004e96ec = unaff_EDI;
      _DAT_004e9700 = unaff_EBP;
      return;
    }
    uVar1 = (longlong)-(DAT_004e96d0 - DAT_004e96d4) * (longlong)(DAT_004e96dc - DAT_00604464);
    uVar2 = (uint)(uVar1 >> 0x20);
    if ((longlong)(int)uVar1 == uVar1) {
      uVar2 = (int)uVar1 >> 0x1f;
    }
    DAT_004e96d0 = -((int)((longlong)((ulonglong)uVar2 << 0x20 | uVar1 & 0xffffffff) /
                          (longlong)(DAT_004e96dc - DAT_004e96d8)) - DAT_004e96d4);
    DAT_004e96d8 = DAT_00604464;
  }
  else if (DAT_0060446c <= DAT_004e96d8) {
    if (DAT_0060446c <= DAT_004e96dc) {
      DAT_004e96e8 = unaff_ESI;
      DAT_004e96ec = unaff_EDI;
      _DAT_004e9700 = unaff_EBP;
      return;
    }
    uVar1 = (longlong)-(DAT_004e96d0 - DAT_004e96d4) * (longlong)((DAT_004e96dc - DAT_0060446c) + 1)
    ;
    uVar2 = (uint)(uVar1 >> 0x20);
    if ((longlong)(int)uVar1 == uVar1) {
      uVar2 = (int)uVar1 >> 0x1f;
    }
    DAT_004e96d0 = -((int)((longlong)((ulonglong)uVar2 << 0x20 | uVar1 & 0xffffffff) /
                          (longlong)(DAT_004e96dc - DAT_004e96d8)) - DAT_004e96d4);
    DAT_004e96d8 = DAT_0060446c + -1;
  }
  if (DAT_004e96dc < DAT_00604464) {
    if (DAT_004e96d8 < DAT_00604464) {
      DAT_004e96e8 = unaff_ESI;
      DAT_004e96ec = unaff_EDI;
      _DAT_004e9700 = unaff_EBP;
      return;
    }
    uVar1 = (longlong)(DAT_004e96d0 - DAT_004e96d4) * (longlong)(DAT_004e96d8 - DAT_00604464);
    uVar2 = (uint)(uVar1 >> 0x20);
    if ((longlong)(int)uVar1 == uVar1) {
      uVar2 = (int)uVar1 >> 0x1f;
    }
    DAT_004e96d4 = DAT_004e96d0 -
                   (int)((longlong)((ulonglong)uVar2 << 0x20 | uVar1 & 0xffffffff) /
                        (longlong)(DAT_004e96d8 - DAT_004e96dc));
    DAT_004e96dc = DAT_00604464;
  }
  else if (DAT_0060446c <= DAT_004e96dc) {
    if (DAT_0060446c <= DAT_004e96d8) {
      DAT_004e96e8 = unaff_ESI;
      DAT_004e96ec = unaff_EDI;
      _DAT_004e9700 = unaff_EBP;
      return;
    }
    uVar1 = (longlong)(DAT_004e96d0 - DAT_004e96d4) * (longlong)((DAT_004e96d8 - DAT_0060446c) + 1);
    uVar2 = (uint)(uVar1 >> 0x20);
    if ((longlong)(int)uVar1 == uVar1) {
      uVar2 = (int)uVar1 >> 0x1f;
    }
    DAT_004e96d4 = DAT_004e96d0 -
                   (int)((longlong)((ulonglong)uVar2 << 0x20 | uVar1 & 0xffffffff) /
                        (longlong)(DAT_004e96d8 - DAT_004e96dc));
    DAT_004e96dc = DAT_0060446c + -1;
  }
  DAT_004e96e8 = unaff_ESI;
  DAT_004e96ec = unaff_EDI;
  _DAT_004e9700 = unaff_EBP;
  if ((unaff_EBP & 8) == 0) {
    FUN_004e9850();
  }
  else {
    FUN_004e98c0();
  }
  return;
}

