
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* build WndStarBaseShipYard + 3D hangar scene (lights/camera) */

void Shipyard_Enter(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_00469a70(s_HangarLight_00557b18);
  FUN_004ad380(1);
  FUN_004e4b65(1);
  g_TitleMenu_ExitFlag = 0;
  DAT_005635dc = 0;
  _DAT_00563e00 = 0x3f800000;
  FUN_004455f0();
  FUN_0043ab40(&GLBL_UI_ELEM_LIST);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseShipYard_00557b04,0);
  FUN_0043a8d0(&GLBL_UI_ELEM_LIST,s_WndStarBaseShipYard_00557b04);
  FUN_00437b30(FUN_00473f70);
  FUN_00437b10(FUN_00485ae0);
  FUN_00445710();
  FUN_0043e8f0(&GLBL_UI_ELEM_LIST,s_Cursor1_0053ff4c);
  FUN_0043efa0();
  puVar3 = &DAT_0056e3a0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_004af2e0();
  Pak_SetLoadPalParams
            (g_PalBrightness,0x80,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
             *(undefined4 *)(iVar1 + 0x54));
  FUN_00468e40(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
               *(undefined4 *)(iVar1 + 0x48));
  FUN_00485330();
  FUN_004854e0();
  FUN_00484df0(DAT_0056e3a4);
  FUN_0040f380(&DAT_0056e3ac,DAT_0056e3a8 + 0x134,&DAT_0056e3c4);
  FUN_00468f50(g_NextMode);
  iVar1 = FUN_00432b70(0);
  if (iVar1 == 0) {
    FUN_00473f70();
    return;
  }
  return;
}

