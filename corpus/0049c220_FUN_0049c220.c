
undefined4 FUN_0049c220(void)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)PTR_global_mem_pool_root;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(PTR_global_mem_pool_root + 0xc) = 0x1000000;
  if (DAT_00603950 == 0) {
    pvVar2 = _malloc(0xf00000);
    *(void **)PTR_global_mem_pool_root = pvVar2;
    *(undefined4 *)(PTR_global_mem_pool_root + 4) = 0xf00000;
  }
  else {
    pvVar2 = _malloc(DAT_00603950);
    *(void **)PTR_global_mem_pool_root = pvVar2;
    *(size_t *)(PTR_global_mem_pool_root + 4) = DAT_00603950;
  }
  if (GLBL_mem_log_lvl != 0) {
    OutputDebugStringA(s_mem_Init___0055d7e4);
  }
  if (*(undefined4 **)PTR_global_mem_pool_root == (undefined4 *)0x0) {
    if (GLBL_mem_log_lvl != 0) {
      OutputDebugStringA(s_mem_Init____failed_0055d7d0);
    }
    return 0xffffffff;
  }
  uVar5 = *(uint *)(PTR_global_mem_pool_root + 4);
  puVar6 = *(undefined4 **)PTR_global_mem_pool_root;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  puVar6 = *(undefined4 **)PTR_global_mem_pool_root;
  *puVar6 = 0;
  puVar6[3] = 0;
  uVar1 = *(undefined4 *)(PTR_global_mem_pool_root + 0xc);
  puVar6[2] = "MemMgr Base";
  puVar6[1] = uVar1;
  *(int *)(PTR_global_mem_pool_root + 0xc) = *(int *)(PTR_global_mem_pool_root + 0xc) + 1;
  *(undefined4 **)(PTR_global_mem_pool_root + 8) = puVar6;
  return 0;
}

