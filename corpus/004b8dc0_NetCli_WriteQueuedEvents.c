
/* copy pending reliable events into packet, decrement resend budget */

void NetCli_WriteQueuedEvents(void)

{
  ushort uVar1;
  void *pvVar2;
  void *node;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pvVar2 = DAT_006af62c;
  while (node = pvVar2, node != (void *)0x0) {
    pvVar2 = *(void **)((int)node + 8);
    if (*(int *)((int)node + 0x1c) == 0) {
      *(undefined4 *)((int)node + 0x1c) = DAT_006af648;
    }
    uVar1 = *(ushort *)((int)node + 0x22);
    puVar5 = (undefined4 *)((int)node + 0x20);
    puVar6 = DAT_006af5d4;
    for (uVar3 = (uint)(uVar1 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    DAT_006af5d4 = (undefined4 *)((int)DAT_006af5d4 + (uint)*(ushort *)((int)node + 0x22));
    iVar4 = *(int *)((int)node + 0x18) + -1;
    *(int *)((int)node + 0x18) = iVar4;
    if (iVar4 < 1) {
      List_Remove(node,&DAT_006af62c);
      Pool_Free((Pool *)&DAT_006af5e4,node);
    }
  }
  return;
}

