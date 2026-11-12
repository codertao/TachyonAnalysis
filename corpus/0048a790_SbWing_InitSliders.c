
/* sweep */

void SbWing_InitSliders(void)

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
  uVar4 = Ui_FindWindowDef(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan_00559700);
  uVar5 = Ui_FindButton(&GLBL_UI_ELEM_LIST,s_BtnWingTxtUp_0055980c);
  uVar6 = Ui_FindButton(&GLBL_UI_ELEM_LIST,s_BtnWingTxtDown_005597fc);
  Slider_Init(&DAT_00558ce8,uVar4,uVar5,uVar6);
  uVar4 = Ui_FindWindowDef(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan2_005596d8);
  uVar5 = Ui_FindButton(&GLBL_UI_ELEM_LIST,s_BtnWingUp_005597f0);
  uVar6 = Ui_FindButton(&GLBL_UI_ELEM_LIST,s_BtnWingDown_005597e4);
  Slider_Init(&DAT_00558d28,uVar4,uVar5,uVar6);
  return;
}

