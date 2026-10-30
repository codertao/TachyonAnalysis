
undefined4 FUN_004c6e62(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  InterlockedIncrement(&DAT_006caedc);
  bVar2 = DAT_006caed8 != 0;
  if (bVar2) {
    InterlockedDecrement(&DAT_006caedc);
    FUN_004c15cd(0x13);
  }
  uVar1 = FUN_004c6ebf(param_1,param_2,param_3);
  if (bVar2) {
    FUN_004c162e(0x13);
  }
  else {
    InterlockedDecrement(&DAT_006caedc);
  }
  return uVar1;
}

