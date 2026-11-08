
void FUN_00487cc0(void)

{
  bool bVar1;
  uint uVar2;
  
  if (((DAT_0056e0ec == 0) || (DAT_0056e1d0 == 0)) || (DAT_0056e2b4 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  FUN_00487b90(&DAT_0056e00c);
  FUN_00487b90(&DAT_0056e0f0);
  FUN_00487b90(&DAT_0056e1d4);
  if (bVar1) {
    if (DAT_0056e2d4 != 0) {
      FUN_00487470(&DAT_0056e2b8);
      DAT_0056e2d4 = 0;
    }
    if (DAT_0056e2f4 != 0) {
      FUN_00487470(&DAT_0056e2d8);
      DAT_0056e2f4 = 0;
    }
    if (DAT_0056e314 != 0) {
      FUN_00487470(&DAT_0056e2f8);
      DAT_0056e314 = 0;
    }
    FUN_004874c0();
    Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseSlots_0055811c,0,0);
  }
  uVar2 = DAT_0056e2b0 | DAT_0056e1cc | DAT_0056e0e8;
  FUN_004878a0(uVar2);
  if (uVar2 != 0) {
    if (DAT_00563e1c != 0) {
      DAT_00563e1c = DAT_00563e1c + -1;
      return;
    }
    DAT_00563e1c = 0x46;
    FUN_0049da00(s_SLOTS_SPIN_005580ac,&DAT_005833e0,&DAT_00583498);
  }
  return;
}

