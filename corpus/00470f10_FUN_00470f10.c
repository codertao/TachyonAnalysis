
void FUN_00470f10(void)

{
  int iVar1;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_004699f0(s_NEBULA_CLIP_0054e8fc);
  iVar1 = Ui_FindWindowDef(&DAT_00583420,s_WndStarBaseHelp_0054e8a0);
  if (DAT_00564ae4 == 0) {
    if ((DAT_005a4b4c != 0) && (*(int *)(DAT_005a4b48 + 0x88) != 0)) {
      DAT_0054e4d8 = DAT_0054e4d8 + 1;
    }
    if (DAT_0054e4d8 != 0) {
      FUN_004455f0();
      FUN_00470df0();
      DAT_0054e4d8 = DAT_0054e4d8 + -1;
      Ui_RefreshWindow(&DAT_00583420,s_WndStarBase_0054e768,0,0);
      Ui_RefreshWindow(&DAT_00583420,s_WndStarBaseHelp_0054e8a0,0,0);
    }
  }
  else {
    FUN_00470df0();
  }
  if ((*(byte *)(iVar1 + 0xf0) & 2) != 0) {
    local_10 = *(int *)(iVar1 + 0x44);
    local_c = *(int *)(iVar1 + 0x48);
    local_8 = *(int *)(iVar1 + 0x4c) + local_10;
    local_4 = *(int *)(iVar1 + 0x50) + local_c;
    FUN_0043b2f0(&DAT_00583420,&local_10,0);
  }
  FUN_0043ac90(&DAT_00583420);
  return;
}

