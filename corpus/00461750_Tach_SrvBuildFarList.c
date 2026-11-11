
/* fill conn+0x134 with quadrant entities within conn+0x160 of camera conn+0x110 (-1 terminated);
   cursor conn+0x138 */

void __cdecl Tach_SrvBuildFarList(TachConn *conn)

{
  SpED_SrvPlayer *pSVar1;
  uint uVar2;
  SpED **ppSVar3;
  vec3 local_c;
  
  ppSVar3 = conn->farList;
  local_c.x = (conn->camera).x;
  local_c.y = (conn->camera).y;
  local_c.z = (conn->camera).z;
  for (pSVar1 = (SpED_SrvPlayer *)conn->ship->quadrant->dynamicList; pSVar1 != (SpED_SrvPlayer *)0x0
      ; pSVar1 = (SpED_SrvPlayer *)pSVar1->next) {
    if (((pSVar1 != conn->ship) && ((pSVar1->netFlags & 1) == 0)) &&
       (uVar2 = distance_between(&pSVar1->pos,&local_c), uVar2 < conn->farRadius)) {
      *ppSVar3 = (SpED *)pSVar1;
      ppSVar3 = ppSVar3 + 1;
    }
  }
  *ppSVar3 = (SpED *)0xffffffff;
  if (ppSVar3 != conn->farList) {
    conn->farCursor = conn->farList;
  }
  return;
}

