
/* (pool,count,elemSize,..) */

void __cdecl Pool_Init(Pool *pool,int count,int elemSize,uint a4,uint a5)

{
  void *pvVar1;
  
  pool->count = count;
  pool->elemSize = elemSize;
  pvVar1 = (void *)FUN_0049c500(count * elemSize,4,0,a4,a5);
  pool->mem = pvVar1;
  FUN_004b7790(pool);
  return;
}

