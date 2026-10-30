
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bc060(void)

{
  float *pfVar1;
  float *pfVar2;
  float10 fVar3;
  int local_4;
  
  local_4 = 0;
  pfVar1 = (float *)&DAT_006af800;
  do {
    fVar3 = (float10)local_4;
    local_4 = local_4 + 1;
    pfVar2 = pfVar1 + 1;
    fVar3 = (float10)fsin(fVar3 * (float10)_DAT_0052ef48);
    *pfVar1 = (float)fVar3;
    pfVar1 = pfVar2;
  } while ((int)pfVar2 < 0x6b0805);
  return;
}

