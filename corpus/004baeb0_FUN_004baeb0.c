
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004baeb0(float *param_1,uint param_2)

{
  int iVar1;
  float *pfVar2;
  
  iVar1 = 0;
  if (0 < DAT_006b0950) {
    pfVar2 = (float *)&DAT_006b0964;
    do {
      if (((param_2 & 1 << ((byte)iVar1 & 0x1f)) != 0) &&
         (param_1[1] * *pfVar2 + pfVar2[-1] * *param_1 + pfVar2[1] * param_1[2] + pfVar2[2] <
          _DAT_0052e598)) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      pfVar2 = pfVar2 + 4;
    } while (iVar1 < DAT_006b0950);
  }
  return 1;
}

