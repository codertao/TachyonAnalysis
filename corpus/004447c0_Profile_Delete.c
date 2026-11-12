
/* clear slot name; delete its .sav and .cfg; clear current */

void Profile_Delete(int param_1)

{
  if ((param_1 != -1) || (param_1 = g_CurrentProfileSlot, g_CurrentProfileSlot != -1)) {
    WndLogin_RefreshSlotPanels();
    if ((-1 < param_1) && (param_1 < 10)) {
      (&DAT_005a3990)[param_1 * 0x8c] = 0;
      File_Delete(&g_ProfileSlots + param_1 * 0x8c);
      str_sprintf(&DAT_005a41e0,s_player_02d_sav_005411c8,param_1);
      File_Delete(&DAT_005a41e0);
      str_sprintf(&DAT_005a41e0,s_player_02d_cfg_005412b0,param_1);
      File_Delete(&DAT_005a41e0);
      g_CurrentProfileSlot = -1;
    }
    Box_Free(DAT_005a3848);
    DAT_005a3848 = 0;
  }
  return;
}

