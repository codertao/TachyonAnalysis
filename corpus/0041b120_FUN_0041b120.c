
void FUN_0041b120(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  do {
    uVar1 = FUN_0041ae70(param_1);
    iVar2 = FUN_0041adc0();
  } while (iVar2 != 0);
  DAT_005b29b0 = DAT_005b29b0 + 0x60000;
  DAT_005b29ac = uVar1;
  DAT_005b29c0 = DAT_005b29c0 + 18000;
  if (0x600000 < DAT_005b29b0) {
    DAT_005b29b0 = 0x600000;
    DAT_005b29b8 = DAT_005b29b4;
    return;
  }
  DAT_005b29b8 = DAT_005b29b4;
  return;
}

