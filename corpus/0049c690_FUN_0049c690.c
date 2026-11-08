
int FUN_0049c690(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)(PTR_global_mem_pool_root + 8);
  if (iVar2 == 0) {
    return 0;
  }
  do {
    iVar1 = *(int *)(iVar2 + 0xc);
    if ((param_1 <= *(uint *)(iVar2 + 4)) && (*(uint *)(iVar2 + 4) <= param_2)) {
      OurFreeMem(iVar2 + 0x10);
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return iVar3;
}

