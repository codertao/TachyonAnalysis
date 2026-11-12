
/* sweep */

int Mem_Realloc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + -0xc);
  OurFreeMem(param_1);
  iVar2 = mem_GetMemEx_probably_alloc(param_2,param_3,0,*(LPCSTR *)(param_1 + -8));
  if (iVar2 != param_1) {
    _memcpy(iVar2,param_1,param_2);
  }
  *(undefined4 *)(iVar2 + -0xc) = uVar1;
  return iVar2;
}

