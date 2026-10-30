
undefined4 * FUN_004b0bf0(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar1 = *(undefined4 **)(param_3 + 0x48);
  if (puVar1 == (undefined4 *)0x0) {
    return param_1;
  }
  *(undefined4 **)(param_2 + 0x48) = param_1;
  uVar2 = FUN_004b0bd0(*(undefined4 *)(param_3 + 0x48));
  puVar6 = puVar1;
  puVar7 = param_1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  param_1[7] = (undefined1 *)((puVar1[7] - (int)puVar1) + (int)param_1);
  param_1[6] = (undefined1 *)((puVar1[6] - (int)puVar1) + (int)param_1);
  param_1[5] = (undefined1 *)((int)param_1 + (puVar1[5] - (int)puVar1));
  uVar3 = 0;
  piVar4 = (int *)param_1[6];
  piVar5 = (int *)puVar1[6];
  if (param_1[3] != 0) {
    do {
      *piVar4 = (param_1[5] - puVar1[5]) + *piVar5;
      piVar4[1] = (piVar5[1] - puVar1[5]) + param_1[5];
      piVar4[2] = (piVar5[2] - puVar1[5]) + param_1[5];
      uVar3 = uVar3 + 1;
      piVar4[3] = (piVar5[3] - puVar1[7]) + param_1[7];
      piVar4 = piVar4 + 0x12;
      piVar5 = piVar5 + 0x12;
    } while (uVar3 < (uint)param_1[3]);
  }
  return (undefined4 *)(uVar2 + (int)param_1);
}

