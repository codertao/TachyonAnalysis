
/* CRT */

LPVOID __heap_alloc(uint param_1)

{
  LPVOID pvVar1;
  
  if (param_1 <= DAT_005621a0) {
    __lock(9);
    pvVar1 = (LPVOID)___sbh_alloc_block(param_1);
    __unlock(9);
    if (pvVar1 != (LPVOID)0x0) {
      return pvVar1;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  pvVar1 = HeapAlloc(DAT_006c9e9c,0,param_1 + 0xf & 0xfffffff0);
  return pvVar1;
}

