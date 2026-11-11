
/* round-robin: build+send packets for slots where (slot&mask)==(tick&mask) */

void NetSrv_SendRound(void)

{
  uint uVar1;
  uint uVar2;
  TachConn *conn;
  uint uVar3;
  
  NetSrv_DistributeEvents();
  uVar3 = 0;
  uVar1 = DAT_006af6b0 & DAT_006af674;
  uVar2 = 0;
  conn = DAT_006af660;
  if (DAT_006af788 != 0) {
    do {
      if ((conn->active != 0) && (DAT_006af7e0 = conn, uVar3 == uVar1)) {
        DAT_006af66c = 0;
        DAT_006af670 = DAT_006af668;
        NetSrv_WritePacketHeader(conn);
        if (conn->field_0x89 == '\0') {
          if (conn->kicked == 0) {
            NetSrv_WritePlayerInfo(conn);
            NetSrv_WriteGameData(conn);
            NetSrv_WriteQueuedEvents(conn);
          }
          else {
            NetSrv_WriteStartupData();
          }
        }
        else {
          NetSrv_WriteKick(conn->field_0x89);
        }
        DAT_006af66c = DAT_006af670 - DAT_006af668;
        if (DAT_006af6f4 <= DAT_006af66c) {
          DAT_006af6f4 = DAT_006af66c;
        }
        NetSrv_SendPacketToPlayer(conn);
        conn->txSeq = conn->txSeq + 1;
      }
      conn = (TachConn *)(conn->name + DAT_006af78c + -0x3c);
      uVar3 = uVar3 + 1 & DAT_006af6b0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_006af788);
  }
  return;
}

