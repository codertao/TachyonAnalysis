
/* garbage-collect deferred-free DCBs across AI/DRONE/BASE/COMMON pools */

void Dcb_GC(void)

{
  Pool_FlushKills(&g_PoolAI);
  Pool_FlushKills(&g_PoolDrone);
  Pool_FlushKills(&g_PoolBase);
  Pool_FlushKills(&g_PoolCommon);
  Pool_FlushPending(&g_PoolAI);
  Pool_FlushPending(&g_PoolDrone);
  Pool_FlushPending(&g_PoolBase);
  Pool_FlushPending(&g_PoolCommon);
  return;
}

