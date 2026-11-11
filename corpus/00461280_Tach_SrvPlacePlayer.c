
/* place a joined player: spawn, Ent_SetQuadrant, state=3, inQuadrant=1, '%s is entering the game',
   roster/scoreboard */

void __cdecl Tach_SrvPlacePlayer(TachConn *conn,void *spawn,uint arg)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [128];
  
  DAT_0058b088 = DAT_0058b088 + 1;
  g_SrvCurConn = conn;
  if (spawn != (void *)0x0) {
    if ((g_FlightStateFlags & 4) == 0) {
      FUN_00461100(conn,spawn,arg);
    }
    FUN_0045d620(conn,*(undefined4 *)((int)spawn + 0x6c),*(undefined4 *)((int)spawn + 0x70),
                 *(undefined4 *)((int)spawn + 0x74));
  }
  FUN_004552a0(g_Quadrants,conn,spawn);
  g_SrvCurShip = conn->ship;
  FUN_00461180(conn);
  FUN_0045f460(conn,conn->ship->quadrant);
  Ent_SetQuadrant((SpED *)g_SrvCurShip,conn,conn->ship->quadrant);
  conn->state = 3;
  if (conn->hasRegName == 0) {
    pcVar2 = conn->name;
  }
  else {
    pcVar2 = (char *)FUN_004a70a0(DAT_0055e404);
  }
  uVar3 = 0xffffffff;
  conn->inQuadrant = 1;
  do {
    pcVar5 = pcVar2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar2 = pcVar5 + -uVar3;
  pcVar5 = conn->displayName;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar5 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar5 = pcVar5 + 1;
  }
  str_sprintf(auStack_80,s__s_is_entering_the_game_00549500,conn->displayName);
  SrvSend_TextMsg(auStack_80,0,2,conn,0,0,DAT_005a6324 & 0xff);
  FUN_0045db40(1,0x17,0);
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 3;
  uStack_8c = 0;
  uStack_88 = 0xffffffff;
  uStack_84 = 0xffffffff;
  Mission_PostEventAll(&uStack_98);
  SrvSend_RosterEntry(conn);
  FUN_00490300(conn);
  SrvSend_Scoreboard();
  return;
}

