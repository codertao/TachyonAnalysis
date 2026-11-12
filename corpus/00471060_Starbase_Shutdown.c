
/* sweep */

void Starbase_Shutdown(void)

{
  Starbase_FreeAll();
  Mnu_Shutdown(&GLBL_UI_ELEM_LIST);
  if (g_PlayerVarStore != 0) {
    VarStore_Save(&g_CurrentSavPath,g_PlayerVarStore);
  }
  VarStore_Close();
  Mem_FreeTag(0xa101);
  g_PlayerVarStore = 0;
  Starbase_PlayMusic(0);
  Music_Close();
  Audio_StopAllSamples();
  Menu_SetVar4b38(0);
  return;
}

