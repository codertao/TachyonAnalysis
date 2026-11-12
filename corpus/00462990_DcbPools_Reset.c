
/* sweep */

void DcbPools_Reset(void)

{
  Pool_InitWrapper(&g_PoolAI);
  Pool_InitWrapper(&g_PoolDrone);
  Pool_InitWrapper(&g_PoolBase);
  Pool_InitWrapper(&g_PoolRoid);
  Pool_InitWrapper(&g_PoolCommon);
  return;
}

