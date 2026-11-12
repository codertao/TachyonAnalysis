
/* refine: allocate + Model_CloneFromPak (runtime instance copy) */

undefined4 * Pak_CreateClone(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar1 = PakClone_CalcTotalSize(param_1);
  puVar2 = (undefined4 *)Mem_AllocChecked(uVar1,4,0,0,DAT_00668f58);
  puVar4 = puVar2;
  for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  Mem_SetTag(puVar2,puVar2 + 0x1c);
  Model_CloneFromPak(puVar2,param_1);
  return puVar2;
}

