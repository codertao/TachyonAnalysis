
/* timed/deferred spawn (delay countdown -> spawn -> advance list; reinforcement waves) */

void Sped_ProcessSpawnQueue(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x20) != 0) {
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + -1;
      return;
    }
    if (*(int *)(iVar1 + 0x1c) == -1) {
      Sped_SpawnSimple(*(undefined4 *)(iVar1 + 0x18),0,0,param_1);
    }
    else {
      Sped_SpawnByClass(*(undefined4 *)(iVar1 + 0x18),*(int *)(iVar1 + 0x1c));
    }
    FUN_004b7930(iVar1,param_1 + 0xb8);
    FUN_004b78a0(param_1 + 0x94,iVar1);
  }
  return;
}

