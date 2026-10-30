
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bbe50(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 local_8;
  
  if (DAT_00564ae4 == 0) {
    param_4 = param_4 + 1;
    *(float *)(param_1 + 0xc) = (float)param_6;
    *(float *)(param_1 + 0x10) = (float)param_7;
  }
  else {
    iVar1 = FUN_004ad3c0(0xf);
    if (iVar1 == 0) {
      *(float *)(param_1 + 0xc) = (float)param_6 + _DAT_0052e594;
      *(float *)(param_1 + 0x10) = (float)param_7 + _DAT_0052e594;
    }
    else {
      *(float *)(param_1 + 0xc) = (float)param_6 - _DAT_0052eff8;
      *(float *)(param_1 + 0x10) = (float)param_7 - _DAT_0052eff8;
    }
  }
  if (param_9 == 0) {
    fVar2 = (float10)fptan((float10)param_8 * (float10)_DAT_0052f010);
    local_8 = (undefined4)
              (longlong)
              ROUND(((float10)(param_4 - param_2) * (float10)_DAT_0052ef60) / fVar2 +
                    (float10)_DAT_0052ef60);
  }
  else {
    fVar2 = (float10)fptan((float10)param_8 * (float10)_DAT_0052f010);
    local_8 = (undefined4)
              (longlong)
              ROUND(((float10)*(int *)(param_1 + 4) * (float10)_DAT_0052ef60) / fVar2 +
                    (float10)_DAT_0052ef60);
  }
  *(undefined4 *)(param_1 + 0x14) = local_8;
  fVar2 = (float10)*(int *)(param_1 + 0x14);
  fVar3 = (float10)fpatan(((float10)(param_6 - param_2) - (float10)_DAT_0052e594) / fVar2,(float10)1
                         );
  *(double *)(param_1 + 0x18) = (double)fVar3;
  fVar3 = (float10)fpatan(((float10)(param_4 - param_6) - (float10)_DAT_0052e594) / fVar2,(float10)1
                         );
  *(double *)(param_1 + 0x20) = (double)fVar3;
  fVar3 = (float10)fpatan(((float10)(param_7 - param_3) - (float10)_DAT_0052e594) / fVar2,(float10)1
                         );
  *(double *)(param_1 + 0x28) = (double)fVar3;
  fVar2 = (float10)fpatan(((float10)(param_5 - param_7) - (float10)_DAT_0052e594) / fVar2,(float10)1
                         );
  *(double *)(param_1 + 0x30) = (double)fVar2;
  FUN_004bbfc0(param_1);
  return;
}

