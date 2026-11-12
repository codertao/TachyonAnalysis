
/* S->C 0x1003 handler */

void CliOn_EntityDestroyed(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar1 = Dcb_FindById(*(int *)(param_1 + 0x10));
  }
  Explosion_SpawnByType
            (*(undefined1 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x15),param_1,0,uVar1);
  Replica_KillById(*(undefined4 *)(param_1 + 0xc));
  return;
}

