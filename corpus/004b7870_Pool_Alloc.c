
/* pop free node, stamp serial at +0x10 (was something_list_related_get_next) */

void * __cdecl Pool_Alloc(Pool *pool)

{
  void *next;
  
  next = pool->freeHead;
  if (next == (void *)0x0) {
    return (void *)0x0;
  }
  *(int *)((int)next + 0x10) = pool->serial;
  pool->serial = pool->serial + 2;
  pool->freeHead = *(void **)((int)next + 8);
  pool->freeCount = pool->freeCount + -1;
  *(undefined4 *)((int)next + 8) = 0;
  *(undefined4 *)((int)next + 4) = 0;
  return next;
}

