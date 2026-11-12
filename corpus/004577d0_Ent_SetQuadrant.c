
/* entity SET_QUADRANT event: bind entity to a quadrant/sector context (entity+0x64). SPX +0x88 bit1
   (fog) caps sensor/vis range to 3000 unless +0x158 & 0x40 (FOG RADAR item? [l]) */

void __cdecl Ent_SetQuadrant(SpED *ent,TachConn *conn,Quadrant *quadrant)

{
  byte bVar1;
  
  Nop(ent,quadrant,s_SET_QUADRANT_00548d24);
  ent->quadrant = quadrant;
  ent->target = (SpED *)0x0;
  conn->farCursor = (SpED **)0x0;
  if (((*(byte *)((int)quadrant->sector->spx + 0x88) & 2) == 0) || ((conn->systems & 0x40) != 0)) {
    bVar1 = g_FlightStateFlags & 4;
    conn->nearRadius = 0xea60000;
    if (bVar1 == 0) {
      conn->farRadius = 0x27100000;
    }
    else {
      conn->farRadius = 0x13880000;
    }
  }
  else {
    conn->nearRadius = 0xbb80000;
    conn->farRadius = 0xbb80000;
  }
  if ((g_FlightStateFlags & 4) != 0) {
    Player_SaveLocation(DAT_005a5dcc,quadrant->sectorId);
  }
  return;
}

