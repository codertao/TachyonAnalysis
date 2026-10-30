
void __fastcall FUN_004e9010(int param_1,int param_2)

{
  int in_EAX;
  int unaff_EBX;
  
  if (DAT_005a6318 == 0) {
    if (DAT_005a6314 == 0) {
      DAT_004e8c30 = (code *)&LAB_004e8d70;
    }
    else {
      DAT_004e8c30 = (code *)&LAB_004e8e40;
    }
  }
  else {
    DAT_004e8c30 = FUN_004e8e70;
  }
  if (in_EAX < DAT_00604460) {
    if (param_1 < DAT_00604460) {
      DAT_004e8c18 = in_EAX;
      DAT_004e8c1c = param_1;
      DAT_004e8c20 = unaff_EBX;
      DAT_004e8c24 = param_2;
      DAT_005a6314 = 0;
      return;
    }
    DAT_004e8c20 = param_2 - (int)(((longlong)(param_1 - DAT_00604460) *
                                   (longlong)-(unaff_EBX - param_2)) / (longlong)(param_1 - in_EAX))
    ;
    DAT_004e8c18 = DAT_00604460;
  }
  else {
    DAT_004e8c18 = in_EAX;
    DAT_004e8c20 = unaff_EBX;
    if (DAT_00604468 <= in_EAX) {
      if (DAT_00604468 <= param_1) {
        DAT_004e8c1c = param_1;
        DAT_004e8c24 = param_2;
        DAT_005a6314 = 0;
        return;
      }
      DAT_004e8c20 = param_2 - (int)(((longlong)((param_1 - DAT_00604468) + 1) *
                                     (longlong)-(unaff_EBX - param_2)) /
                                    (longlong)(param_1 - in_EAX));
      DAT_004e8c18 = DAT_00604468 + -1;
    }
  }
  if (param_1 < DAT_00604460) {
    if (DAT_004e8c18 < DAT_00604460) {
      DAT_004e8c1c = param_1;
      DAT_004e8c24 = param_2;
      DAT_005a6314 = 0;
      return;
    }
    DAT_004e8c24 = DAT_004e8c20 -
                   (int)(((longlong)(DAT_004e8c18 - DAT_00604460) *
                         (longlong)(DAT_004e8c20 - param_2)) / (longlong)-(param_1 - DAT_004e8c18));
    DAT_004e8c1c = DAT_00604460;
  }
  else {
    DAT_004e8c1c = param_1;
    DAT_004e8c24 = param_2;
    if (DAT_00604468 <= param_1) {
      if (DAT_00604468 <= DAT_004e8c18) {
        DAT_005a6314 = 0;
        return;
      }
      DAT_004e8c24 = DAT_004e8c20 -
                     (int)(((longlong)((DAT_004e8c18 - DAT_00604468) + 1) *
                           (longlong)(DAT_004e8c20 - param_2)) / (longlong)-(param_1 - DAT_004e8c18)
                          );
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

