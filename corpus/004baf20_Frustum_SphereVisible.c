
/* refine: false if sphere fully behind any of DAT_006b0950 planes */

undefined4 Frustum_SphereVisible(int *param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_006b0950) {
    pfVar1 = (float *)&DAT_006b0964;
    do {
      if ((float)param_1[1] * *pfVar1 + (float)param_1[2] * pfVar1[1] + (float)*param_1 * pfVar1[-1]
          + pfVar1[2] < (float)-param_2) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      pfVar1 = pfVar1 + 4;
    } while (iVar2 < DAT_006b0950);
  }
  return 1;
}

