
byte * FUN_004c5013(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  
  if (param_1 < param_2) {
    if (DAT_006c9b5c == 0) {
      param_2 = param_2 + -1;
    }
    else {
      FUN_004c15cd(0x19);
      pbVar1 = param_2 + -1;
      if ((*(byte *)((int)&DAT_006c9c60 + param_2[-1] + 1) & 4) == 0) {
        do {
          pbVar1 = pbVar1 + -1;
          if (pbVar1 < param_1) break;
        } while ((*(byte *)((int)&DAT_006c9c60 + *pbVar1 + 1) & 4) != 0);
        FUN_004c162e(0x19);
        param_2 = param_2 + (-1 - ((int)param_2 - (int)pbVar1 & 1U));
      }
      else {
        FUN_004c162e(0x19);
        param_2 = param_2 + -2;
      }
    }
  }
  else {
    param_2 = (byte *)0x0;
  }
  return param_2;
}

