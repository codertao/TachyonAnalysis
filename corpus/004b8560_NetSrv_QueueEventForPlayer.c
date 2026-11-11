
void __cdecl NetSrv_QueueEventForPlayer(TachConn *conn,SrvEvent *evt)

{
  ushort uVar1;
  void *node;
  uint uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  
  node = Pool_Alloc(&conn->eventPool);
  if (node != (void *)0x0) {
    *(int *)((int)node + 0x18) = evt->resend;
    *(undefined4 *)((int)node + 0x1c) = 0;
    uVar1 = evt->size;
    puVar3 = &evt->type;
    puVar4 = (undefined4 *)((int)node + 0x20);
    for (uVar2 = (uint)(uVar1 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *(undefined4 *)puVar3;
      puVar3 = puVar3 + 2;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(char *)puVar4 = (char)*puVar3;
      puVar3 = (ushort *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    List_Append(node,&conn->eventQueue);
  }
  return;
}

