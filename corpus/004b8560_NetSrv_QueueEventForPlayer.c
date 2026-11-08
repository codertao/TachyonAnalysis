
void NetSrv_QueueEventForPlayer(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar2 = something_list_related_get_next(param_1 + 0x18);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    uVar1 = *(ushort *)(param_2 + 0x36);
    puVar4 = (undefined4 *)(param_2 + 0x34);
    puVar5 = (undefined4 *)(iVar2 + 0x20);
    for (uVar3 = (uint)(uVar1 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    FUN_004b78f0(iVar2,param_1 + 0x84);
  }
  return;
}

