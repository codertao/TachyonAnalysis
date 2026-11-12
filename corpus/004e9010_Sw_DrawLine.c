
/* (x0@EAX, y0@EBX, x1@ECX, y1@EDX) colour 0x5a6308, clip rect 0x604460..6c; plotter by
   0x5a6314/0x5a6318 */

void __cdecl Sw_DrawLine(int x0,int y0,int x1,int y1)

{
  if (DAT_005a6318 == 0) {
    if (DAT_005a6314 == 0) {
      DAT_004e8c30 = (code *)&LAB_004e8d70;
    }
    else {
      DAT_004e8c30 = (code *)&LAB_004e8e40;
    }
  }
  else {
    DAT_004e8c30 = SwAsm_DrawLine;
  }
  if (x0 < DAT_00604460) {
    if (x1 < DAT_00604460) {
      DAT_004e8c18 = x0;
      DAT_004e8c1c = x1;
      DAT_004e8c20 = y0;
      DAT_004e8c24 = y1;
      DAT_005a6314 = 0;
      return;
    }
    DAT_004e8c20 = y1 - (int)(((longlong)(x1 - DAT_00604460) * (longlong)-(y0 - y1)) /
                             (longlong)(x1 - x0));
    DAT_004e8c18 = DAT_00604460;
  }
  else {
    DAT_004e8c18 = x0;
    DAT_004e8c20 = y0;
    if (DAT_00604468 <= x0) {
      if (DAT_00604468 <= x1) {
        DAT_004e8c1c = x1;
        DAT_004e8c24 = y1;
        DAT_005a6314 = 0;
        return;
      }
      DAT_004e8c20 = y1 - (int)(((longlong)((x1 - DAT_00604468) + 1) * (longlong)-(y0 - y1)) /
                               (longlong)(x1 - x0));
      DAT_004e8c18 = DAT_00604468 + -1;
    }
  }
  if (x1 < DAT_00604460) {
    if (DAT_004e8c18 < DAT_00604460) {
      DAT_004e8c1c = x1;
      DAT_004e8c24 = y1;
      DAT_005a6314 = 0;
      return;
    }
    DAT_004e8c24 = DAT_004e8c20 -
                   (int)(((longlong)(DAT_004e8c18 - DAT_00604460) * (longlong)(DAT_004e8c20 - y1)) /
                        (longlong)-(x1 - DAT_004e8c18));
    DAT_004e8c1c = DAT_00604460;
  }
  else {
    DAT_004e8c1c = x1;
    DAT_004e8c24 = y1;
    if (DAT_00604468 <= x1) {
      if (DAT_00604468 <= DAT_004e8c18) {
        DAT_005a6314 = 0;
        return;
      }
      DAT_004e8c24 = DAT_004e8c20 -
                     (int)(((longlong)((DAT_004e8c18 - DAT_00604468) + 1) *
                           (longlong)(DAT_004e8c20 - y1)) / (longlong)-(x1 - DAT_004e8c18));
      DAT_004e8c1c = DAT_00604468 + -1;
    }
  }
  if (DAT_004e8c20 < DAT_00604464) {
    if (DAT_004e8c24 < DAT_00604464) {
      DAT_005a6314 = 0;
      return;
    }
    DAT_004e8c18 = -((int)(((longlong)-(DAT_004e8c18 - DAT_004e8c1c) *
                           (longlong)(DAT_004e8c24 - DAT_00604464)) /
                          (longlong)(DAT_004e8c24 - DAT_004e8c20)) - DAT_004e8c1c);
    DAT_004e8c20 = DAT_00604464;
  }
  else if (DAT_0060446c <= DAT_004e8c20) {
    if (DAT_0060446c <= DAT_004e8c24) {
      DAT_005a6314 = 0;
      return;
    }
    DAT_004e8c18 = -((int)(((longlong)-(DAT_004e8c18 - DAT_004e8c1c) *
                           (longlong)((DAT_004e8c24 - DAT_0060446c) + 1)) /
                          (longlong)(DAT_004e8c24 - DAT_004e8c20)) - DAT_004e8c1c);
    DAT_004e8c20 = DAT_0060446c + -1;
  }
  if (DAT_004e8c24 < DAT_00604464) {
    if (DAT_004e8c20 < DAT_00604464) {
      DAT_005a6314 = 0;
      return;
    }
    DAT_004e8c1c = DAT_004e8c18 -
                   (int)(((longlong)(DAT_004e8c18 - DAT_004e8c1c) *
                         (longlong)(DAT_004e8c20 - DAT_00604464)) /
                        (longlong)(DAT_004e8c20 - DAT_004e8c24));
    DAT_004e8c24 = DAT_00604464;
  }
  else if (DAT_0060446c <= DAT_004e8c24) {
    if (DAT_0060446c <= DAT_004e8c20) {
      DAT_005a6314 = 0;
      return;
    }
    DAT_004e8c1c = DAT_004e8c18 -
                   (int)(((longlong)(DAT_004e8c18 - DAT_004e8c1c) *
                         (longlong)((DAT_004e8c20 - DAT_0060446c) + 1)) /
                        (longlong)(DAT_004e8c20 - DAT_004e8c24));
    DAT_004e8c24 = DAT_0060446c + -1;
  }
  (*DAT_004e8c30)();
  DAT_005a6314 = 0;
  return;
}

