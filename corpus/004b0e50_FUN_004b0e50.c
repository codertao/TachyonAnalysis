
undefined2 *
FUN_004b0e50(undefined2 *param_1,int param_2,int param_3,int param_4,int *param_5,uint param_6)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int *piVar7;
  
  *param_5 = 0;
  if ((param_6 != 0) && (*(char *)(param_6 + 0x1a) == '}')) {
    *param_5 = 1;
  }
  uVar1 = 0;
  iVar6 = 0;
  if (*(int *)(param_4 + 0x30) != 0) {
    puVar3 = (undefined4 *)(*(int *)(param_4 + 0x48) + 0x28);
    do {
      *puVar3 = 0;
      uVar1 = uVar1 + 1;
      puVar3 = puVar3 + 0xb;
    } while (uVar1 < *(uint *)(param_4 + 0x30));
  }
  param_6 = 0;
  puVar5 = param_1;
  if (*(int *)(param_4 + 0x34) != 0) {
    piVar7 = (int *)(*(int *)(param_4 + 0x4c) + 8);
    puVar2 = param_1;
    do {
      if (piVar7[-1] == param_3) {
        if (*(int *)(*piVar7 + 0x28) == 0) {
          *(undefined4 *)(*piVar7 + 0x28) = 1;
          *puVar2 = (short)(piVar7[3] - *(int *)(param_4 + 0x50) >> 4);
          iVar4 = *piVar7 - *(int *)(param_4 + 0x48);
          puVar2[1] = ((short)(iVar4 / 0x2c) + (short)(iVar4 >> 0x1f)) -
                      (short)((longlong)iVar4 * 0x2e8ba2e9 >> 0x3f);
          puVar2 = puVar2 + 2;
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 2;
        }
        if (*(int *)(piVar7[1] + 0x28) == 0) {
          *(undefined4 *)(piVar7[1] + 0x28) = 1;
          *puVar2 = (short)(piVar7[4] - *(int *)(param_4 + 0x50) >> 4);
          iVar4 = piVar7[1] - *(int *)(param_4 + 0x48);
          puVar2[1] = ((short)(iVar4 / 0x2c) + (short)(iVar4 >> 0x1f)) -
                      (short)((longlong)iVar4 * 0x2e8ba2e9 >> 0x3f);
          puVar2 = puVar2 + 2;
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 2;
        }
        if (*(int *)(piVar7[2] + 0x28) == 0) {
          *(undefined4 *)(piVar7[2] + 0x28) = 1;
          *puVar2 = (short)(piVar7[5] - *(int *)(param_4 + 0x50) >> 4);
          iVar4 = piVar7[2] - *(int *)(param_4 + 0x48);
          puVar2[1] = ((short)(iVar4 / 0x2c) + (short)(iVar4 >> 0x1f)) -
                      (short)((longlong)iVar4 * 0x2e8ba2e9 >> 0x3f);
          puVar2 = puVar2 + 2;
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 2;
        }
        *param_5 = 1;
      }
      param_6 = param_6 + 1;
      piVar7 = piVar7 + 8;
    } while (param_6 < *(uint *)(param_4 + 0x34));
  }
  if (*param_5 != 0) {
    *(int *)(param_2 + 0x10) = iVar6;
    *(undefined2 **)(param_2 + 0x14) = param_1;
  }
  return puVar5;
}

