
uint FUN_004bafa0(int *param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = 0;
  if (0 < DAT_006b0950) {
    pfVar2 = (float *)&DAT_006b0964;
    do {
      if ((float)param_1[1] * *pfVar2 + (float)param_1[2] * pfVar2[1] + (float)*param_1 * pfVar2[-1]
          + pfVar2[2] < (float)param_2) {
        uVar3 = uVar3 | 1 << ((byte)iVar1 & 0x1f);
      }
      iVar1 = iVar1 + 1;
      pfVar2 = pfVar2 + 4;
    } while (iVar1 < DAT_006b0950);
  }
  return uVar3;
}

