
/* sweep: guess */

int Mem_FindOwnerPool(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(PTR_global_mem_pool_root + 8);
  do {
    iVar1 = iVar2;
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 0xc);
  } while (*(int *)(iVar1 + 0xc) != param_1);
  return iVar1;
}

