
/* sweep */

void SbLobby_Draw(void)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  Starbase_FindFont(s_NEBULA_CLIP_0054e8fc);
  iVar1 = Ui_FindWindowDef(&GLBL_UI_ELEM_LIST,s_WndStarBaseHelp_0054e8a0);
  if (DAT_00564ae4 == 0) {
    if ((DAT_005a4b4c != 0) && (*(int *)(DAT_005a4b48 + 0x88) != 0)) {
      DAT_0054e4d8 = DAT_0054e4d8 + 1;
    }
    if (DAT_0054e4d8 != 0) {
      Ui_PresentFrame();
      SbLobby_DrawNebula();
      DAT_0054e4d8 = DAT_0054e4d8 + -1;
      Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBase_0054e768,0,0);
      Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseHelp_0054e8a0,0,0);
    }
  }
  else {
    SbLobby_DrawNebula();
  }
  if ((*(byte *)(iVar1 + 0xf0) & 2) != 0) {
    local_10 = *(int *)(iVar1 + 0x44);
    local_c = *(int *)(iVar1 + 0x48);
    local_8 = *(int *)(iVar1 + 0x4c) + local_10;
    local_4 = *(int *)(iVar1 + 0x50) + local_c;
    Ui_RefreshOverlapping(&GLBL_UI_ELEM_LIST,&local_10,0);
  }
  Ui_DrawAll(&GLBL_UI_ELEM_LIST);
  return;
}

