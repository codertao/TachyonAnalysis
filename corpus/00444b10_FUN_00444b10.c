
void FUN_00444b10(int param_1)

{
  int iVar1;
  int local_20c;
  undefined1 local_208 [260];
  undefined1 local_104 [260];
  
  if (((param_1 != -1) || (param_1 = g_CurrentProfileSlot, g_CurrentProfileSlot != -1)) &&
     (DAT_00541184 != -1)) {
    if ((-1 < param_1) && (param_1 < 10)) {
      str_sprintf(&DAT_005a3990 + param_1 * 0x8c,&DAT_005a3990 + DAT_00541184 * 0x8c);
      str_sprintf(local_208,s_player_02d_sav_005411c8,DAT_00541184);
      str_sprintf(local_104,s_player_02d_sav_005411c8,param_1);
      iVar1 = get_file_len(local_208);
      if (iVar1 != -1) {
        FUN_0048e3d0(&local_20c,iVar1,4,s_Login_Paste_Buffer_00541348,0xa000);
        if (local_20c != 0) {
          File_ReadAll(local_208,local_20c);
          File_WriteAll(local_104,local_20c,iVar1);
          OurFreeMem(local_20c);
        }
      }
      str_sprintf(local_208,s_player_02d_cfg_005412b0,DAT_00541184);
      str_sprintf(local_104,s_player_02d_cfg_005412b0,param_1);
      iVar1 = get_file_len(local_208);
      if (iVar1 != -1) {
        FUN_0048e3d0(&local_20c,iVar1,4,s_Login_Paste_Buffer_00541348,0xa000);
        if (local_20c != 0) {
          File_ReadAll(local_208,local_20c);
          File_WriteAll(local_104,local_20c,iVar1);
          OurFreeMem(local_20c);
        }
      }
    }
    FUN_00444450();
    set_button_state(&g_UiManager,s_BtnLoginCopy_005411f4,1);
    FUN_0043c150(&g_UiManager,s_BtnLoginCopy_005411f4,0x80000);
    set_button_state(&g_UiManager,s_BtnLoginPaste_005411e4,8);
    Ui_SetButtonFlag(&g_UiManager,s_BtnLoginPaste_005411e4,0x80000);
    DAT_00541184 = -1;
    Profile_CreateNew(param_1);
  }
  return;
}

