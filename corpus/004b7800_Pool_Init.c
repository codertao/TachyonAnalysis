
/* (pool,count,elemSize,..) */

void __cdecl Pool_Init(Pool *pool,int count,int elemSize,uint a4,uint a5)

{
  void *pvVar1;
  
  pool->count = count;
  pool->elemSize = elemSize;
  pvVar1 = (void *)Mem_AllocChecked(count * elemSize,4,0,a4,a5);
  pool->mem = pvVar1;
  Pool_Clear(pool);
  return;
}

