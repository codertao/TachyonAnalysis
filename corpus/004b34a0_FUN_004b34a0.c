
void FUN_004b34a0(float *param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  
  pfVar7 = (float *)*param_2;
  fVar1 = *param_1;
  fVar2 = *pfVar7;
  fVar3 = param_1[1];
  fVar4 = pfVar7[1];
  fVar5 = param_1[2];
  fVar6 = pfVar7[2];
  fVar8 = (fVar1 - fVar2) * (float)param_2[7] +
          (fVar3 - fVar4) * (float)param_2[8] + (fVar5 - fVar6) * (float)param_2[9];
  *param_4 = fVar8;
  *param_3 = ((fVar1 - fVar2) * (float)param_2[4] +
             (fVar3 - fVar4) * (float)param_2[5] + (fVar5 - fVar6) * (float)param_2[6]) -
             fVar8 * (float)param_2[0x10];
  return;
}

