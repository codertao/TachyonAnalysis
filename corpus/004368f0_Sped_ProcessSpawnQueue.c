
/* timed/deferred spawn (delay countdown -> spawn -> advance list; reinforcement waves) */

void Sped_ProcessSpawnQueue(int param_1)

{
  void *node;
  
  node = *(void **)(param_1 + 0xb8);
  if (node != (void *)0x0) {
    if (*(int *)((int)node + 0x20) != 0) {
      *(int *)((int)node + 0x20) = *(int *)((int)node + 0x20) + -1;
      return;
    }
    if (*(int *)((int)node + 0x1c) == -1) {
      Sped_SpawnSimple(*(undefined4 *)((int)node + 0x18),0,0,param_1);
    }
    else {
      Sped_SpawnByClass(*(undefined4 *)((int)node + 0x18),*(int *)((int)node + 0x1c));
    }
    List_Remove(node,(void **)(param_1 + 0xb8));
    Pool_Free((Pool *)(param_1 + 0x94),node);
  }
  return;
}

