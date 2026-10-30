
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047d4a0(void)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  
  pfVar3 = (float *)&DAT_00571d94;
  iVar4 = 0x10;
  do {
    if (pfVar3[-5] != 0.0) {
      fVar1 = *pfVar3;
      *pfVar3 = pfVar3[1] + fVar1;
      if (pfVar3[-1] < pfVar3[1] + fVar1) {
        *pfVar3 = pfVar3[-1];
      }
      if (*pfVar3 < _DAT_0052e598) {
        pfVar5 = pfVar3 + -5;
        for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar5 = 0.0;
          pfVar5 = pfVar5 + 1;
        }
      }
      pfVar3[2] = (float)((int)pfVar3[2] - 1U & 0x1ff);
    }
    pfVar3 = pfVar3 + 9;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

