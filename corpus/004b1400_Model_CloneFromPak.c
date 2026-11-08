
/* copy header, LODs (0x4b0b40), collision (Model_CopyCollision), parts (0x4b12c0) */

void Model_CloneFromPak(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar3 = param_2[0xe];
  puVar4 = param_2;
  puVar5 = param_1;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  uVar1 = FUN_004b0b40((undefined1 *)((int)param_1 + param_2[0xe]),param_1,param_2);
  uVar1 = Model_CopyCollision(uVar1,param_1,param_2);
  ModelClone_CopyLods(uVar1,param_1,param_2);
  return;
}

