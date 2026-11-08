
/* round-robin: build+send packets for slots where (slot&mask)==(tick&mask) */

void NetSrv_SendRound(void)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  NetSrv_DistributeEvents();
  uVar4 = 0;
  uVar1 = DAT_006af6b0 & DAT_006af674;
  uVar2 = 0;
  piVar3 = DAT_006af660;
  if (DAT_006af788 != 0) {
    do {
      if ((*piVar3 != 0) && (DAT_006af7e0 = piVar3, uVar4 == uVar1)) {
        DAT_006af66c = 0;
        DAT_006af670 = DAT_006af668;
        NetSrv_WritePacketHeader(piVar3);
        if (*(char *)((int)piVar3 + 0x89) == '\0') {
          if ((char)piVar3[0x22] == '\0') {
            NetSrv_WritePlayerInfo(piVar3);
            NetSrv_WriteGameData(piVar3);
            NetSrv_WriteQueuedEvents(piVar3);
          }
          else {
            NetSrv_WriteStartupData();
          }
        }
        else {
          NetSrv_WriteKick(*(char *)((int)piVar3 + 0x89));
        }
        DAT_006af66c = DAT_006af670 - DAT_006af668;
        if (DAT_006af6f4 <= DAT_006af66c) {
          DAT_006af6f4 = DAT_006af66c;
        }
        NetSrv_SendPacketToPlayer(piVar3);
        piVar3[0x2f] = piVar3[0x2f] + 1;
      }
      piVar3 = (int *)((int)piVar3 + DAT_006af78c);
      uVar4 = uVar4 + 1 & DAT_006af6b0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_006af788);
  }
  return;
}

