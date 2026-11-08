
void FUN_0049c500(undefined4 param_1,undefined4 param_2,undefined4 param_3,LPCSTR param_4,
                 uint param_5)

{
  int iVar1;
  
  iVar1 = mem_GetMemEx_probably_alloc(param_1,param_2,param_3,param_4);
  if ((iVar1 != 0) && (param_5 < 0x1000000)) {
    *(uint *)(iVar1 + -0xc) = param_5;
  }
  return;
}

