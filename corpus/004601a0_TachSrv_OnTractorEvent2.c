
/* sweep: guess */

void TachSrv_OnTractorEvent2(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = Quad_FindEntById(*param_1,g_SrvCurShip->quadrant);
  if (iVar1 != 0) {
    iVar1 = Ent_DockIsAvailable(iVar1);
    if (iVar1 != 0) {
      local_4 = *(undefined4 *)(iVar1 + 0x20);
      local_c = (uint)*(ushort *)(param_1 + 1);
      local_18 = 0;
      local_14 = 0;
      local_10 = 6;
      local_8 = 1;
      Mission_PostEvent(&local_18,g_SrvCurShip->quadrant);
    }
  }
  return;
}

