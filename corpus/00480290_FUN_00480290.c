
void FUN_00480290(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong local_8;
  
  puVar4 = &DAT_005564f8;
  if (DAT_005564f8 != 0) {
    while (iVar2 = str_cmp(puVar4 + 1,param_1), iVar2 != 0) {
      piVar1 = puVar4 + 0x1b;
      puVar4 = puVar4 + 0x1b;
      if (*piVar1 == 0) {
        return;
      }
    }
    iVar2 = puVar4[0x18];
    if ((param_2 < (int)puVar4[0x18]) || (iVar2 = puVar4[0x19], (int)puVar4[0x19] < param_2)) {
      param_2 = iVar2;
    }
    local_8 = (ulonglong)(uint)(param_2 - puVar4[0x18]);
    local_8._0_4_ =
         (int)(longlong)
              ROUND(((float10)local_8 / (float10)(int)(puVar4[0x19] - puVar4[0x18])) *
                    (float10)((puVar4[0x14] - puVar4[0x12]) + -0x20));
    iVar2 = (int)local_8 + 0x10 + puVar4[0x12];
    iVar3 = puVar4[0x13] + ((int)(puVar4[0x15] - puVar4[0x13]) >> 1);
    puVar4[0x16] = iVar2;
    puVar4[0x17] = iVar3;
    FUN_00480020(puVar4 + 1,iVar2,iVar3);
  }
  return;
}

