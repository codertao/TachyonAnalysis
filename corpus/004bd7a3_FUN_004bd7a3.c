
int FUN_004bd7a3(int param_1)

{
  bool bVar1;
  
  if (DAT_00565138 == 0) {
    if ((0x40 < param_1) && (param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_006caedc);
    bVar1 = DAT_006caed8 != 0;
    if (bVar1) {
      InterlockedDecrement(&DAT_006caedc);
      FUN_004c15cd(0x13);
    }
    param_1 = FUN_004bd812(param_1);
    if (bVar1) {
      FUN_004c162e(0x13);
    }
    else {
      InterlockedDecrement(&DAT_006caedc);
    }
  }
  return param_1;
}

