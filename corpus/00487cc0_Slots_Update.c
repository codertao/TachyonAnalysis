
/* sweep */

void Slots_Update(void)

{
  bool bVar1;
  uint uVar2;
  
  if (((DAT_0056e0ec == 0) || (DAT_0056e1d0 == 0)) || (DAT_0056e2b4 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  SlotWheel_Update(&DAT_0056e00c);
  SlotWheel_Update(&DAT_0056e0f0);
  SlotWheel_Update(&DAT_0056e1d4);
  if (bVar1) {
    if (DAT_0056e2d4 != 0) {
      Slots_EvaluateLine(&DAT_0056e2b8);
      DAT_0056e2d4 = 0;
    }
    if (DAT_0056e2f4 != 0) {
      Slots_EvaluateLine(&DAT_0056e2d8);
      DAT_0056e2f4 = 0;
    }
    if (DAT_0056e314 != 0) {
      Slots_EvaluateLine(&DAT_0056e2f8);
      DAT_0056e314 = 0;
    }
    Slots_EvaluateSpin();
    Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseSlots_0055811c,0,0);
  }
  uVar2 = DAT_0056e2b0 | DAT_0056e1cc | DAT_0056e0e8;
  Slots_RefreshButtons(uVar2);
  if (uVar2 != 0) {
    if (DAT_00563e1c != 0) {
      DAT_00563e1c = DAT_00563e1c + -1;
      return;
    }
    DAT_00563e1c = 0x46;
    SndTrig_PostEvent(s_SLOTS_SPIN_005580ac,&DAT_005833e0,&DAT_00583498);
  }
  return;
}

