
/* sweep */

void Mem_InitTempPool(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00603950;
  PTR_global_mem_pool_root = (undefined *)&DAT_00603f20;
  DAT_00603950 = DAT_00603958;
  Mem_InitPool();
  DAT_00603950 = uVar1;
  PTR_global_mem_pool_root = (undefined *)&DAT_00603f60;
  return;
}

