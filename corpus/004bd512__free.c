
/* CRT */

void _free(LPVOID param_1)

{
  int iVar1;
  
  if (param_1 != (LPVOID)0x0) {
    __lock(9);
    iVar1 = ___sbh_find_block(param_1);
    if (iVar1 != 0) {
      ___sbh_free_block(iVar1,param_1);
      __unlock(9);
      return;
    }
    __unlock(9);
    HeapFree(DAT_006c9e9c,0,param_1);
  }
  return;
}

