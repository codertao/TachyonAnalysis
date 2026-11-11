
/* S->C 0x1112 */

void SrvSend_Scoreboard(void)

{
  short sVar1;
  ushort uVar2;
  ushort *payload;
  uint uVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  short local_1c;
  EventSpec local_18;
  
  sVar1 = 2;
  local_1c = 2;
  payload = (ushort *)NetSrv_AllocEvent();
  uVar2 = (ushort)DAT_006af664;
  if (payload != (ushort *)0x0) {
    *payload = (ushort)DAT_006af664;
    if (8 < uVar2) {
      *payload = 8;
    }
    TachSrv_BuildScoreboard(DAT_0058b084);
    uVar3 = 0;
    puVar4 = payload + 1;
    puVar5 = DAT_0058b084;
    if (*payload != 0) {
      do {
        *(undefined4 *)puVar4 = *puVar5;
        puVar4[2] = *(ushort *)(puVar5 + 1);
        local_1c = sVar1 + 6;
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 3;
        puVar5 = (undefined4 *)((int)puVar5 + 6);
        sVar1 = local_1c;
      } while (uVar3 < *payload);
    }
    local_18.resend = 0x800;
    local_18._2_2_ = 0;
    local_18.flags = 0;
    local_18._6_2_ = 0;
    NetSrv_QueueEvent(payload,0x1112,local_1c,&local_18);
  }
  return;
}

