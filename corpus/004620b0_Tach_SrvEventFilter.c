
/* delivery flags 0x01 radius,0x02 except,0x04 only,0x08 team,0x10,0x20 same quadrant,0x40,0x80 */

int __cdecl Tach_SrvEventFilter(TachConn *conn,SrvEvent *evt)

{
  uint uVar1;
  
  uVar1 = evt->flags;
  if (((uVar1 & 0x80) != 0) && (conn->kicked != 0)) {
    return 0;
  }
  if (((uVar1 & 0x40) != 0) && (conn->state != 0)) {
    return 0;
  }
  if ((uVar1 & 1) != 0) {
    uVar1 = distance_between(&conn->camera,&evt->pos);
    if (evt->radius < uVar1) {
      return 0;
    }
  }
  uVar1 = evt->flags;
  if (((uVar1 & 2) != 0) && (conn == evt->target)) {
    return 0;
  }
  if (((uVar1 & 4) != 0) && (conn != evt->target)) {
    return 0;
  }
  if (((uVar1 & 8) != 0) && (conn->teamId != evt->teamOrGroup)) {
    return 0;
  }
  if (((uVar1 & 0x10) != 0) && (conn->groupId != (int)evt->teamOrGroup)) {
    return 0;
  }
  if (((uVar1 & 0x20) != 0) && (conn->ship->quadrant != evt->quadrant)) {
    return 0;
  }
  return 1;
}

