
/* sweep */

void Mem_FreeTemp(undefined4 param_1)

{
  PTR_global_mem_pool_root = (undefined *)&DAT_00603f20;
  OurFreeMem(param_1);
  PTR_global_mem_pool_root = (undefined *)&DAT_00603f60;
  return;
}

