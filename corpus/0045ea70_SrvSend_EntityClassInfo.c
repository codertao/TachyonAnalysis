
/* S->C 0x1100 */

void SrvSend_EntityClassInfo(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  puVar3 = (undefined4 *)maybe_take_some_mem();
  if (puVar3 != (undefined4 *)0x0) {
    iVar1 = *(int *)(param_1 + 0x8c);
    local_1c = 6;
    *puVar3 = *(undefined4 *)(param_1 + 0x78);
    *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(iVar1 + 0x14);
    pcVar2 = *(code **)(iVar1 + 0x24);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(param_1,puVar3,&local_1c);
    }
    local_18 = 0x800;
    local_14 = 4;
    local_c = DAT_0058b068;
    NetSrv_QueueEvent(puVar3,0x1100,local_1c,&local_18);
  }
  return;
}

