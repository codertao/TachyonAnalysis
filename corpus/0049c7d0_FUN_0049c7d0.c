
undefined4 FUN_0049c7d0(undefined4 param_1,LPCSTR param_2)

{
  undefined4 uVar1;
  
  if (DAT_00603f20 == 0) {
    return 0;
  }
  PTR_global_mem_pool_root = (undefined *)&DAT_00603f20;
  uVar1 = mem_GetMemEx_probably_alloc(param_1,4,0,param_2);
  PTR_global_mem_pool_root = (undefined *)&DAT_00603f60;
  return uVar1;
}

