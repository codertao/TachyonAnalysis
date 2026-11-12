
/* sweep */

void TachSrv_OnUndocking(undefined4 *param_1)

{
  SpED_SrvPlayer *pSVar1;
  int iVar2;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  pSVar1 = g_SrvCurShip;
  if (DAT_005a6730 != 0) {
    str_sprintf(local_40,s_DETECTED_PLAYER_UNDOCKING___DOCK_005494a4,*param_1);
    SrvSend_TextSimple(local_40,0);
  }
  iVar2 = Quad_FindEntById(*param_1,g_SrvCurShip->quadrant);
  if (iVar2 != 0) {
    iVar2 = Ent_DockIsAvailable(iVar2);
    if (iVar2 != 0) {
      local_44 = *(undefined4 *)(iVar2 + 0x20);
      local_58 = 0;
      local_54 = 0;
      local_50 = 5;
      local_4c = 0;
      local_48 = 1;
      Mission_PostEvent(&local_58,g_SrvCurShip->quadrant);
      if (DAT_005a6730 != 0) {
        str_sprintf(local_40,s_DOCK_FOUND___UNDOCKING_WITH_SPED_00549478,
                    *(undefined4 *)(iVar2 + 0x20));
        SrvSend_TextSimple(local_40,0);
      }
    }
  }
  *(undefined4 *)&pSVar1->field_0x114 = 0;
  *(undefined4 *)&pSVar1->field_0x110 = 0;
  return;
}

