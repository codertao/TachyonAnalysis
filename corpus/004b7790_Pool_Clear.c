
/* refine: zero the pool storage and rebuild the free list */

void Pool_Clear(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1[5];
  iVar1 = param_1[6];
  puVar2 = (undefined4 *)*param_1;
  for (uVar3 = (uint)(iVar4 * iVar1) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (uVar3 = iVar4 * iVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  puVar2 = (undefined4 *)*param_1;
  uVar3 = 0;
  param_1[1] = puVar2;
  if (param_1[5] != 1) {
    iVar4 = param_1[6];
    do {
      puVar2[2] = iVar4 + (int)puVar2;
      *puVar2 = param_1;
      iVar4 = param_1[6];
      puVar2 = (undefined4 *)((int)puVar2 + iVar4);
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_1[5] - 1);
  }
  puVar2[2] = 0;
  *puVar2 = param_1;
  param_1[2] = puVar2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = 1;
  param_1[8] = param_1[5];
  return;
}

