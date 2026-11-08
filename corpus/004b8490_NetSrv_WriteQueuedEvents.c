
/* copy pending reliable events into packet, decrement resend budget */

void NetSrv_WriteQueuedEvents(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)(param_1 + 0x84);
  while (iVar3 = iVar2, iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    if (*(int *)(iVar3 + 0x1c) == 0) {
      *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(param_1 + 0xbc);
    }
    uVar1 = *(ushort *)(iVar3 + 0x22);
    puVar6 = (undefined4 *)(iVar3 + 0x20);
    puVar7 = DAT_006af670;
    for (uVar4 = (uint)(uVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    DAT_006af670 = (undefined4 *)((int)DAT_006af670 + (uint)*(ushort *)(iVar3 + 0x22));
    iVar5 = *(int *)(iVar3 + 0x18) + -1;
    *(int *)(iVar3 + 0x18) = iVar5;
    if (iVar5 < 1) {
      FUN_004b7930(iVar3,param_1 + 0x84);
      FUN_004b78a0(param_1 + 0x18,iVar3);
    }
  }
  return;
}

