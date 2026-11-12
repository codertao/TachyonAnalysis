
/* sweep */

undefined4 Mem_ReallocMain(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (DAT_00603f40 == 0) {
    return 0;
  }
  PTR_global_mem_pool_root = (undefined *)&DAT_00603f40;
  uVar1 = Mem_Realloc(param_1,param_2,4);
  PTR_global_mem_pool_root = (undefined *)&DAT_00603f60;
  return uVar1;
}

