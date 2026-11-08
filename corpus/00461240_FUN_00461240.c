
void FUN_00461240(void)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = DAT_006af660;
  if (DAT_005897e0 != 0) {
    do {
      if (*piVar1 != 0) {
        FUN_004611e0(piVar1);
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0x82;
    } while (uVar2 < DAT_005897e0);
  }
  FUN_00461230();
  SrvSend_RoundResume();
  return;
}

