
/* player left: destroy/leave quadrant, free conn+0x120, '%s has left the game' */

void __cdecl Tach_SrvRemovePlayer(TachConn *conn)

{
  SpED_SrvPlayer *pSVar1;
  undefined1 auStack_80 [128];
  
  Nop(conn);
  Srv_FreeSendQueue(conn);
  pSVar1 = conn->ship;
  if (pSVar1 != (SpED_SrvPlayer *)0x0) {
    SrvSend_EntityDestroyed(&pSVar1->pos,3,0,0,0,0,0,pSVar1->quadrant);
    Ent_LeaveQuadrant((SpED *)conn->ship,conn->ship->quadrant);
    Dcb_Free(conn->ship);
  }
  if (conn->allocBuf != (void *)0x0) {
    OurFreeMem(conn->allocBuf);
    conn->allocBuf = (void *)0x0;
  }
  str_sprintf(auStack_80,s__s_has_left_the_game_00549518,conn->displayName);
  SrvSend_TextMsg(auStack_80,0,0,0,0xffffffff,0,DAT_005a6324 & 0xff);
  SrvSend_UiSoundDefault(1,0x18,0);
  Voice_RemovePlayer(conn);
  SrvSend_RosterClear(conn);
  SrvSend_Scoreboard();
  return;
}

