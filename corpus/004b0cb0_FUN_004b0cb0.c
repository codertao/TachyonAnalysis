
short * FUN_004b0cb0(short *param_1,int *param_2,int param_3,int param_4,int param_5,
                    undefined4 *param_6,int param_7)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  int *piVar7;
  int local_18 [3];
  short *local_c;
  
  local_18[2] = param_4;
  psVar6 = param_1;
  iVar3 = *(int *)(param_4 + 0x10);
  if (iVar3 == 0) {
    *param_6 = 0;
    return param_1;
  }
  param_4 = param_3;
  if ((param_7 != 0) && (*(char *)(param_7 + 0x1a) == '}')) {
    param_4 = param_7;
    *(undefined1 *)(local_18[2] + 0xf) = 0x7f;
    if (*(char *)(iVar3 + 0x4c) == '\0') {
      *(undefined1 *)(iVar3 + 0x4c) = 1;
    }
  }
  iVar3 = *(int *)(local_18[2] + 0x10);
  *param_6 = 0;
  local_18[1] = iVar3 + 0x28;
  local_c = param_1;
  param_1 = (short *)0x0;
  if (*(int *)(param_5 + 0x34) != 0) {
    piVar7 = (int *)(*(int *)(param_5 + 0x4c) + 0xc);
    psVar1 = psVar6;
    iVar3 = 0;
    psVar5 = psVar6;
    do {
      psVar2 = psVar1;
      local_18[0] = iVar3;
      psVar6 = psVar5;
      if (piVar7[-2] == param_4) {
        iVar4 = piVar7[-1] - *(int *)(param_5 + 0x48);
        *psVar1 = ((short)(iVar4 / 0x2c) + (short)(iVar4 >> 0x1f)) -
                  (short)((longlong)iVar4 * 0x2e8ba2e9 >> 0x3f);
        iVar4 = *piVar7 - *(int *)(param_5 + 0x48);
        psVar1[1] = ((short)(iVar4 / 0x2c) + (short)(iVar4 >> 0x1f)) -
                    (short)((longlong)iVar4 * 0x2e8ba2e9 >> 0x3f);
        iVar4 = piVar7[1] - *(int *)(param_5 + 0x48);
        psVar1[2] = ((short)(iVar4 / 0x2c) + (short)(iVar4 >> 0x1f)) -
                    (short)((longlong)iVar4 * 0x2e8ba2e9 >> 0x3f);
        psVar2 = psVar1 + 3;
        local_18[0] = iVar3 + 1;
        psVar6 = psVar5 + 3;
        if ((*(byte *)(param_4 + 0x16) & 0x40) != 0) {
          iVar4 = *piVar7 - *(int *)(param_5 + 0x48);
          *psVar2 = ((short)(iVar4 / 0x2c) + (short)(iVar4 >> 0x1f)) -
                    (short)((longlong)iVar4 * 0x2e8ba2e9 >> 0x3f);
          iVar4 = piVar7[-1] - *(int *)(param_5 + 0x48);
          psVar1[4] = ((short)(iVar4 / 0x2c) + (short)(iVar4 >> 0x1f)) -
                      (short)((longlong)iVar4 * 0x2e8ba2e9 >> 0x3f);
          iVar4 = piVar7[1] - *(int *)(param_5 + 0x48);
          psVar1[5] = ((short)(iVar4 / 0x2c) + (short)(iVar4 >> 0x1f)) -
                      (short)((longlong)iVar4 * 0x2e8ba2e9 >> 0x3f);
          psVar2 = psVar1 + 6;
          local_18[0] = iVar3 + 2;
          psVar6 = psVar5 + 6;
        }
      }
      param_1 = (short *)((int)param_1 + 1);
      piVar7 = piVar7 + 8;
      psVar1 = psVar2;
      iVar3 = local_18[0];
      psVar5 = psVar6;
    } while (param_1 < *(uint *)(param_5 + 0x34));
    if (local_18[0] != 0) {
      piVar7 = local_18;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *param_2 = *piVar7;
        piVar7 = piVar7 + 1;
        param_2 = param_2 + 1;
      }
      *param_6 = 1;
    }
  }
  return psVar6;
}

