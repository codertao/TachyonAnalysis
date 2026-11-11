
/* link every pending DCB (+0xc chain) into its quadrant dynamic list */

void __cdecl Pool_FlushPending(Pool *pool)

{
  SpED *node;
  
  for (node = pool->pending; node != (SpED *)0x0; node = node->pendingNext) {
    List_PushFront(node,&node->quadrant->dynamicList);
  }
  pool->pending = (SpED *)0x0;
  return;
}

