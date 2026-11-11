
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* interest-managed: <=8 in radius +0x15c of client camera, target, 2 far, persistent-object page */

short * __cdecl Tach_SrvWriteSnapshot(TachConn *conn,short *out)

{
  SpED_SrvPlayer *pSVar1;
  int iVar2;
  SpED *ent;
  short *hdr;
  uint uVar3;
  short *psVar4;
  void *out_00;
  undefined4 *puVar5;
  
  hdr = out;
  pSVar1 = (SpED_SrvPlayer *)conn->ship->quadrant->dynamicList;
  *out = 0;
  *(int *)(out + 3) = (conn->camera).x;
  *(int *)(out + 5) = (conn->camera).y;
  iVar2 = (conn->camera).z;
  out[1] = 0;
  *(int *)(out + 7) = iVar2;
  psVar4 = out + 9;
  if (conn->state == 1) {
    return psVar4;
  }
  if (conn->inQuadrant != 0) {
    _g_SnapStamp = _g_SnapStamp + 1;
    if (conn->farCursor == (SpED **)0x0) {
      Tach_SrvBuildFarList(conn);
    }
    DAT_0062c0e8 = 0;
    out = (short *)&DAT_006240e8;
    for (; pSVar1 != (SpED_SrvPlayer *)0x0; pSVar1 = (SpED_SrvPlayer *)pSVar1->next) {
      if (((pSVar1 != conn->ship) && ((pSVar1->netFlags & 1) == 0)) &&
         (uVar3 = distance_between(&conn->camera,&pSVar1->pos), uVar3 < conn->nearRadius)) {
        *(uint *)((int)out + 4) = uVar3;
        *(SpED_SrvPlayer **)out = pSVar1;
        out = (short *)((int)out + 8);
        DAT_0062c0e8 = DAT_0062c0e8 + 1;
      }
    }
    uVar3 = Tach_SrvNearCap(conn);
    if (DAT_0062c0e8 < uVar3) {
      uVar3 = DAT_0062c0e8;
    }
    puVar5 = &DAT_006240e8;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      psVar4 = Tach_SrvWriteEntityRecord((SpED *)*puVar5,&conn->camera,psVar4,0);
      *hdr = *hdr + 1;
      puVar5 = puVar5 + 2;
    }
    ent = conn->ship->target;
    if (((ent != (SpED *)0x0) && ((ent->netFlags & 1) == 0)) && (ent->snapStamp != g_SnapStamp)) {
      psVar4 = Tach_SrvWriteEntityRecord(ent,&conn->camera,psVar4,0);
      *hdr = *hdr + 1;
    }
    out_00 = Tach_SrvWriteFarRecords(conn,psVar4,&conn->camera,hdr);
    psVar4 = Tach_SrvWritePersistentPage(conn,&conn->camera,out_00,hdr);
    return psVar4;
  }
  return psVar4;
}

