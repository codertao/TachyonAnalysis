
/* sweep */

uint SbStats_UpdateScan(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (DAT_0056c490 != 0) {
    DAT_0056c524 = DAT_0056c524 + 1;
    uVar1 = DAT_0056c524 / 0xf;
    if (DAT_0056c524 % 0xf == 0) {
      iVar2 = find_ui_elem_by_name(&GLBL_UI_ELEM_LIST,s_TxtStatsScan_00558864);
      if (iVar2 != 0) {
        Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseStats_0055883c,iVar2 + 0x10c,0);
      }
      DAT_00563e24 = (uint)(DAT_00563e24 == 0);
      if (DAT_00563e24 == 0) {
        uVar1 = sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsScan_00558864,0x10000);
      }
      else {
        uVar1 = clr_label_flags_11c();
      }
    }
    if ((100 < DAT_0056c524) && (uVar1 = DAT_0056c520, DAT_0056c520 == 0)) {
      uVar1 = SbStats_StartHologram();
      return uVar1;
    }
  }
  return uVar1;
}

