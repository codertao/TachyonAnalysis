
/* S->C 0x1112 */

void SrvSend_Scoreboard(void)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_1c = 2;
  puVar2 = (ushort *)maybe_take_some_mem();
  uVar1 = (ushort)DAT_006af664;
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = (ushort)DAT_006af664;
    if (8 < uVar1) {
      *puVar2 = 8;
    }
    TachSrv_BuildScoreboard(DAT_0058b084);
    uVar3 = 0;
    puVar4 = puVar2 + 1;
    puVar5 = DAT_0058b084;
    if (*puVar2 != 0) {
      do {
        *(undefined4 *)puVar4 = *puVar5;
        puVar4[2] = *(ushort *)(puVar5 + 1);
        local_1c = local_1c + 6;
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 3;
        puVar5 = (undefined4 *)((int)puVar5 + 6);
      } while (uVar3 < *puVar2);
    }
    local_18 = 0x800;
    local_14 = 0;
    NetSrv_QueueEvent(puVar2,0x1112,local_1c,&local_18);
  }
  return;
}

