
/* sweep: DOCK TAG */

void TachSrv_OnDocked(undefined4 *param_1)

{
  SpED_SrvPlayer *pSVar1;
  int iVar2;
  int iVar3;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  pSVar1 = g_SrvCurShip;
  if (DAT_005a6730 != 0) {
    str_sprintf(local_40,s_DETECTED_PLAYER_DOCKED___DOCK_TA_00549450,*param_1);
    SrvSend_TextSimple(local_40,0);
  }
  iVar2 = Quad_FindEntById(*param_1,g_SrvCurShip->quadrant);
  if (iVar2 == 0) {
    if (DAT_005a6730 != 0) {
      str_sprintf(local_40,s_DOCKED_OBJ__d_NOT_FOUND___trigge_00549400,*param_1);
      SrvSend_TextSimple(local_40,0);
    }
  }
  else {
    iVar3 = Ent_DockIsAvailable(iVar2);
    if (iVar3 != 0) {
      local_44 = *(undefined4 *)(iVar3 + 0x20);
      local_58 = 0;
      local_54 = 0;
      local_50 = 4;
      local_4c = 0;
      local_48 = 1;
      Mission_PostEvent(&local_58,g_SrvCurShip->quadrant);
      if (DAT_005a6730 != 0) {
        str_sprintf(local_40,s_DOCK_FOUND___DOCK_SPED_ID____d_00549430,*(undefined4 *)(iVar3 + 0x20)
                   );
        SrvSend_TextSimple(local_40,0);
      }
      *(int *)&pSVar1->field_0x110 = iVar2;
      *(undefined4 *)&pSVar1->field_0x114 = 0;
      return;
    }
  }
  return;
}

