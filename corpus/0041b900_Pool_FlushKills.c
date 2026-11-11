
/* unlink + free every DCB on the kill list */

void __cdecl Pool_FlushKills(Pool *pool)

{
  SpED *pSVar1;
  SpED *node;
  
  node = pool->killList;
  if (node == (SpED *)0x0) {
    pool->killList = (SpED *)0x0;
    return;
  }
  do {
    pSVar1 = node->pendingNext;
    List_Remove(node,&node->quadrant->dynamicList);
    Pool_Free(node->pool,node);
    node->linked = 0;
    node = pSVar1;
  } while (pSVar1 != (SpED *)0x0);
  pool->killList = (SpED *)0x0;
  return;
}

