
/* sweep: guess */

void MpCfg_OnBuyBtn(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  iVar1 = Teletype_GetScroll(0);
  if (iVar1 != 0) {
    Teletype_GetScrollRange(0,param_1);
    Teletype_SetRect(0,0,0,0,&local_14);
    puVar2 = (undefined4 *)Teletype_GetRect(0);
    local_10 = *puVar2;
    local_8 = puVar2[2];
    local_4 = puVar2[3] + local_14;
    local_c = puVar2[1] - local_14;
    Ui_RefreshWindow(&g_UiManager,s_WndMPShipDM_0054767c,&local_10,0);
    Ui_RefreshWindow(&g_UiManager,s_WndMPShipDM_0054767c,&DAT_00547514,0);
  }
  return;
}

