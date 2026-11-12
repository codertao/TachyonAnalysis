
/* sweep */

void Host_InitMapSlider(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = Starbase_FindPalMat(s_SliderBar_00541040);
  iVar2 = Starbase_FindPalMat(s_SliderHover_00541034);
  iVar3 = Starbase_FindPalMat(s_SliderDown_00541028);
  if (iVar1 != 0) {
    Gfx_DefineColor(0x1b,*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
                    *(undefined4 *)(iVar1 + 0x48));
  }
  if (iVar2 != 0) {
    Gfx_DefineColor(0x1c,*(undefined4 *)(iVar2 + 0x40),*(undefined4 *)(iVar2 + 0x44),
                    *(undefined4 *)(iVar2 + 0x48));
  }
  if (iVar3 != 0) {
    Gfx_DefineColor(0x1d,*(undefined4 *)(iVar3 + 0x40),*(undefined4 *)(iVar3 + 0x44),
                    *(undefined4 *)(iVar3 + 0x48));
  }
  uVar4 = Ui_FindWindowDef(&g_UiManager,s_WndHost_00540e4c);
  uVar5 = Ui_FindButton(&g_UiManager,s_BtnHostGameUp_00541018);
  uVar6 = Ui_FindButton(&g_UiManager,s_BtnHostGameDown_00541008);
  Slider_Init(&DAT_00540c88,uVar4,uVar5,uVar6);
  return;
}

