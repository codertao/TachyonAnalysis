
/* sweep */

void SbJobs_InitSliders(void)

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
  uVar4 = Ui_FindWindowDef(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobs_00552160);
  uVar5 = Ui_FindButton(&GLBL_UI_ELEM_LIST,s_BtnJobTxtUp_00552300);
  uVar6 = Ui_FindButton(&GLBL_UI_ELEM_LIST,s_BtnJobTxtDown_005522f0);
  Slider_Init(&DAT_00552020,uVar4,uVar5,uVar6);
  uVar5 = Ui_FindButton(&GLBL_UI_ELEM_LIST,s_BtnJobUp_005522e4);
  uVar6 = Ui_FindButton(&GLBL_UI_ELEM_LIST,s_BtnJobDown_005522d8);
  Slider_Init(&DAT_00552060,uVar4,uVar5,uVar6);
  return;
}

