
/* SrvEvent from g_NetEventPool; returns payload (node+0x3c) (was maybe_take_some_mem) */

int NetSrv_AllocEvent(void)

{
  void *pvVar1;
  
  pvVar1 = Pool_Alloc(&g_NetEventPool);
  if (pvVar1 != (void *)0x0) {
    return (int)pvVar1 + 0x3c;
  }
  return 0;
}

