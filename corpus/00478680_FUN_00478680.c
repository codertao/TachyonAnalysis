
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00478680(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  int local_10;
  
  piVar3 = &DAT_00550980;
  iVar2 = DAT_00550980;
  while (iVar2 != -1) {
    if (*piVar3 == 0) {
      iVar2 = DAT_0057202c / 3;
      fVar4 = (float10)FUN_004bd55a((double)DAT_00572020 * _DAT_0052ec20);
      local_10 = (int)(longlong)ROUND(fVar4);
      if (local_10 != 2 && -1 < local_10 + -2) {
        piVar3[0xd] = iVar2;
        piVar3[0xe] = local_10;
        piVar3[0xf] = 2;
        FUN_00465970();
      }
    }
    piVar1 = piVar3 + 0x10;
    piVar3 = piVar3 + 0x10;
    iVar2 = *piVar1;
  }
  FUN_00465c20();
  return;
}

