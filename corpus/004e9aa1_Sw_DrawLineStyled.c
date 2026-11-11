
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (x0@EAX, y0@EBX, x1@ECX, y1@EDX, pattern@ESI, patLen@EDI, flags@EBP) bit1 dashed, bit0 selects
   plotter */

void __cdecl Sw_DrawLineStyled(int x0,int y0,int x1,int y1,uint pattern,int patLen,uint flags)

{
  ulonglong uVar1;
  uint uVar2;
  
  if (GLBL_some_str == 0) {
    return;
  }
  if ((flags & 2) == 0) {
    if ((flags & 4) == 0) {
      DAT_004e96f4 = 1;
    }
  }
  else {
    DAT_004e96f4 = 0;
  }
  uVar2 = flags & 1;
  if (DAT_00604488 == 0x10) {
    DAT_004e96f0 = (&PTR_LAB_004e9710)[uVar2];
  }
  else if (DAT_00604488 == 0x20) {
    DAT_004e96f0 = (&PTR_LAB_004e9718)[uVar2];
  }
  else {
    DAT_004e96f0 = (&PTR_LAB_004e9708)[uVar2];
  }
  if (x0 < DAT_00604460) {
    if (x1 < DAT_00604460) {
      DAT_004e96d0 = x0;
      DAT_004e96d4 = x1;
      DAT_004e96d8 = y0;
      DAT_004e96dc = y1;
      DAT_004e96e8 = pattern;
      DAT_004e96ec = patLen;
      _DAT_004e9700 = flags;
      return;
    }
    uVar1 = (longlong)(x1 - DAT_00604460) * (longlong)-(y0 - y1);
    uVar2 = (uint)(uVar1 >> 0x20);
    if ((longlong)(int)uVar1 == uVar1) {
      uVar2 = (int)uVar1 >> 0x1f;
    }
    DAT_004e96d8 = y1 - (int)((longlong)((ulonglong)uVar2 << 0x20 | uVar1 & 0xffffffff) /
                             (longlong)(x1 - x0));
    DAT_004e96d0 = DAT_00604460;
  }
  else {
    DAT_004e96d0 = x0;
    DAT_004e96d8 = y0;
    if (DAT_00604468 <= x0) {
      if (DAT_00604468 <= x1) {
        DAT_004e96d4 = x1;
        DAT_004e96dc = y1;
        DAT_004e96e8 = pattern;
        DAT_004e96ec = patLen;
        _DAT_004e9700 = flags;
        return;
      }
      uVar1 = (longlong)((x1 - DAT_00604468) + 1) * (longlong)-(y0 - y1);
      uVar2 = (uint)(uVar1 >> 0x20);
      if ((longlong)(int)uVar1 == uVar1) {
        uVar2 = (int)uVar1 >> 0x1f;
      }
      DAT_004e96d8 = y1 - (int)((longlong)((ulonglong)uVar2 << 0x20 | uVar1 & 0xffffffff) /
                               (longlong)(x1 - x0));
      DAT_004e96d0 = DAT_00604468 + -1;
    }
  }
  if (x1 < DAT_00604460) {
    if (DAT_004e96d0 < DAT_00604460) {
      DAT_004e96d4 = x1;
      DAT_004e96dc = y1;
      DAT_004e96e8 = pattern;
      DAT_004e96ec = patLen;
      _DAT_004e9700 = flags;
      return;
    }
    uVar1 = (longlong)(DAT_004e96d0 - DAT_00604460) * (longlong)(DAT_004e96d8 - y1);
    uVar2 = (uint)(uVar1 >> 0x20);
    if ((longlong)(int)uVar1 == uVar1) {
      uVar2 = (int)uVar1 >> 0x1f;
    }
    DAT_004e96dc = DAT_004e96d8 -
                   (int)((longlong)((ulonglong)uVar2 << 0x20 | uVar1 & 0xffffffff) /
                        (longlong)-(x1 - DAT_004e96d0));
    DAT_004e96d4 = DAT_00604460;
  }
  else {
    DAT_004e96d4 = x1;
    DAT_004e96dc = y1;
    if (DAT_00604468 <= x1) {
      if (DAT_00604468 <= DAT_004e96d0) {
        DAT_004e96e8 = pattern;
        DAT_004e96ec = patLen;
        _DAT_004e9700 = flags;
        return;
      }
      uVar1 = (longlong)((DAT_004e96d0 - DAT_00604468) + 1) * (longlong)(DAT_004e96d8 - y1);
      uVar2 = (uint)(uVar1 >> 0x20);
      if ((longlong)(int)uVar1 == uVar1) {
        uVar2 = (int)uVar1 >> 0x1f;
      }
      DAT_004e96dc = DAT_004e96d8 -
                     (int)((longlong)((ulonglong)uVar2 << 0x20 | uVar1 & 0xffffffff) /
                          (longlong)-(x1 - DAT_004e96d0));
      DAT_004e96d4 = DAT_00604468 + -1;
    }
  }
  if (DAT_004e96d8 < DAT_00604464) {
    if (DAT_004e96dc < DAT_00604464) {
      DAT_004e96e8 = pattern;
      DAT_004e96ec = patLen;
      _DAT_004e9700 = flags;
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
      DAT_004e96e8 = pattern;
      DAT_004e96ec = patLen;
      _DAT_004e9700 = flags;
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
      DAT_004e96e8 = pattern;
      DAT_004e96ec = patLen;
      _DAT_004e9700 = flags;
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
      DAT_004e96e8 = pattern;
      DAT_004e96ec = patLen;
      _DAT_004e9700 = flags;
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
  DAT_004e96e8 = pattern;
  DAT_004e96ec = patLen;
  _DAT_004e9700 = flags;
  if ((flags & 8) == 0) {
    FUN_004e9850();
  }
  else {
    FUN_004e98c0();
  }
  return;
}

