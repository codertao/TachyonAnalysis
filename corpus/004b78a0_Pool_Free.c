
/* push node on pool free list, ++freeCount */

void __cdecl Pool_Free(Pool *pool,void *node)

{
  *(void **)((int)node + 8) = pool->freeHead;
  pool->freeHead = node;
  pool->freeCount = pool->freeCount + 1;
  return;
}

