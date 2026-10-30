
undefined4 * FUN_004b0b40(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  if (*(int *)(param_3 + 0x4c) == 0) {
    return param_1;
  }
  *(undefined4 **)(param_2 + 0x4c) = param_1;
  puVar1 = *(undefined4 **)(param_3 + 0x4c);
  uVar2 = FUN_004b0b00(puVar1);
  puVar5 = puVar1;
  puVar7 = param_1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  puVar4 = (undefined1 *)((puVar1[5] - (int)puVar1) + (int)param_1);
  uVar3 = 0;
  param_1[5] = puVar4;
  if (param_1[4] != 0) {
    puVar5 = (undefined4 *)(puVar4 + 4);
    piVar6 = (int *)(puVar1[5] + 4);
    do {
      puVar5[2] = (undefined1 *)((piVar6[2] - (int)puVar1) + (int)param_1);
      *puVar5 = (undefined1 *)((*piVar6 - (int)puVar1) + (int)param_1);
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 0x1d;
      piVar6 = piVar6 + 0x1d;
    } while (uVar3 < (uint)param_1[4]);
  }
  return (undefined4 *)(uVar2 + (int)param_1);
}

