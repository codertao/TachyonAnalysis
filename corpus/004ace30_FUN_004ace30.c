
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ace30(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_c;
  
  if (DAT_00604494 == 0) {
    FUN_004ebccb(param_1,param_2,param_3,param_4);
    return;
  }
  if ((DAT_006044a0 & 4) == 0) {
    if (*(int *)(DAT_00604504 + 0x1c) == 0) {
      uVar1 = *(uint *)(&DAT_005a6440 + param_4 * 4);
      _DAT_0060e7d4 = 0x7f7f7f;
      _DAT_0060e82c = 0x7f7f7f;
      _DAT_0060e7c0 = 0x100;
      _DAT_0060e818 = 0x100;
      _DAT_0060e81c = param_1 << 7;
      _DAT_0060e820 = param_2 << 7;
      pfVar3 = (float *)&DAT_0060ea5c;
      do {
        puVar4 = &DAT_0060e7ac;
        puVar5 = &DAT_0060e7d8;
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_c = (int)(longlong)ROUND((float)param_3 * pfVar3[-0x80]);
        _DAT_0060e7c4 = (local_c + param_1) * 0x80;
        local_c = (int)(longlong)ROUND((float)param_3 * *pfVar3);
        _DAT_0060e7c8 = (local_c + param_2) * 0x80;
        if (pfVar3 != (float *)&DAT_0060ea5c) {
          (*DAT_00604558)(&DAT_0060e7ac,&DAT_0060e7d8,
                          ((uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) >> 8 |
                          uVar1 & 0xff000000,4,0);
        }
        pfVar3 = pfVar3 + 0x10;
      } while ((int)pfVar3 < 0x60f25d);
    }
  }
  else if (*(int *)(DAT_00604504 + 0x1c) != 0) {
    FUN_004ebccb(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}

