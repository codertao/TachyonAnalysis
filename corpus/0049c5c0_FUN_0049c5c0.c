
undefined4 FUN_0049c5c0(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (DAT_00603f40 == 0) {
    return 0;
  }
  PTR_global_mem_pool_root = (undefined *)&DAT_00603f40;
  uVar1 = mem_GetMemEx_probably_alloc(param_1,4,0,(LPCSTR)0x0);
  PTR_global_mem_pool_root = (undefined *)&DAT_00603f60;
  return uVar1;
}

