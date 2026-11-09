
undefined4 __cdecl
FUN_10003c00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar2 = param_3;
  iVar3 = param_3[4];
  while (iVar3 != 0) {
    Sleep(0);
    iVar3 = param_3[4];
  }
  puVar1 = (undefined4 *)param_3[1];
  param_3[4] = 1;
  if (puVar1 == (undefined4 *)param_3[2]) {
    param_3[4] = 0;
    return 0;
  }
  puVar6 = (undefined4 *)*param_3;
  param_3 = puVar1 + 4;
  if (puVar6 + 0x4000 <= puVar1 + 4) {
    param_3 = puVar6;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = puVar1[2];
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = puVar1[3];
  }
  *param_2 = puVar1[1];
  uVar5 = puVar1[1];
  puVar6 = (undefined4 *)*puVar1;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  free((void *)*puVar1);
  *puVar1 = 0;
  iVar3 = puVar2[3] + -1;
  puVar2[1] = param_3;
  puVar2[3] = iVar3;
  if (iVar3 < 0) {
    FUN_10003aa0(s_NEGATIVE_QUE_COUNT_10007128,iVar3);
  }
  puVar2[4] = 0;
  return 1;
}

