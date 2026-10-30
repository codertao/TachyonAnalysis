
int FUN_004bcf9b(int param_1)

{
  bool bVar1;
  
  if (DAT_00565138 == 0) {
    if ((0x60 < param_1) && (param_1 < 0x7b)) {
      return param_1 + -0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_006caedc);
    bVar1 = DAT_006caed8 != 0;
    if (bVar1) {
      InterlockedDecrement(&DAT_006caedc);
      FUN_004c15cd(0x13);
    }
    param_1 = FUN_004bd00a(param_1);
    if (bVar1) {
      FUN_004c162e(0x13);
    }
    else {
      InterlockedDecrement(&DAT_006caedc);
    }
  }
  return param_1;
}

