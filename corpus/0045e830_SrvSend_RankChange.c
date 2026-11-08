
/* S->C 0x1127 */

void SrvSend_RankChange(int param_1)

{
  undefined2 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = (undefined2 *)maybe_take_some_mem();
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = *(undefined2 *)(param_1 + 8);
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(*(int *)(param_1 + 200) + 0xfc);
    *(undefined1 *)((int)puVar1 + 3) = *(undefined1 *)(param_1 + 0x10c);
    local_18 = 0x800;
    local_14 = 0;
    NetSrv_QueueEvent(puVar1,0x1127,4,&local_18);
  }
  return;
}

