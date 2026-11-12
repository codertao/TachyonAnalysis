
/* sweep */

void Mem_DumpTempToFile(undefined4 param_1)

{
  PTR_global_mem_pool_root = (undefined *)&DAT_00603f20;
  Mem_DumpStatsToFile(param_1);
  PTR_global_mem_pool_root = (undefined *)&DAT_00603f60;
  return;
}

