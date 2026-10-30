
undefined4 FUN_004c1f30(short param_1)

{
  short *psVar1;
  
  psVar1 = &DAT_00561eb4;
  do {
    if (param_1 == *psVar1) {
      return 0;
    }
    psVar1 = psVar1 + 1;
  } while ((int)psVar1 < 0x561ec8);
  return 1;
}

