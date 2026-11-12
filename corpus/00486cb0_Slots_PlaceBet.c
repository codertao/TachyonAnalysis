
/* sweep */

void Slots_PlaceBet(int param_1)

{
  uint uVar1;
  
  if ((DAT_0056e000 < 300) || (param_1 < 1)) {
    uVar1 = Player_GetCredits();
    if ((99 < uVar1) && ((DAT_0056e000 != 0 || (-1 < param_1)))) {
      DAT_0056e000 = DAT_0056e000 + param_1 * 100;
      if (300 < DAT_0056e000) {
        DAT_0056e000 = 300;
      }
      Player_AddCredits(param_1 * -100);
      Slots_UpdateCredits();
      Slots_ResetPayLines();
      SlotWheel_Stop(&DAT_0056e2b8);
      SlotWheel_Stop(&DAT_0056e2d8);
      SlotWheel_Stop(&DAT_0056e2f8);
      if (99 < DAT_0056e000) {
        ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IAPay1_00557fa4,0x20000);
        ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IAPayBar1_00557f88,0x20000);
        ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IAPayLine1_00557f64,0x20000);
        ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IAPayLine12_00557f40,0x20000);
        SlotWheel_Start(&DAT_0056e2b8);
      }
      if (199 < DAT_0056e000) {
        ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IAPay2_00557f9c,0x20000);
        ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IAPayBar2_00557f7c,0x20000);
        ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IAPayLine2_00557f58,0x20000);
        ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IAPayLine22_00557f34,0x20000);
        SlotWheel_Start(&DAT_0056e2d8);
      }
      if (DAT_0056e000 == 300) {
        ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IAPay3_00557f94,0x20000);
        ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IAPayBar3_00557f70,0x20000);
        ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IAPayLine3_00557f4c,0x20000);
        ImageArea_ClearFlags(&GLBL_UI_ELEM_LIST,s_IAPayLine32_00557f28,0x20000);
        SlotWheel_Start(&DAT_0056e2f8);
      }
    }
  }
  return;
}

