
/* sweep: text table lookup */

void Ui_SetLabelTextById(undefined4 uiMgr,undefined4 dlg_type,undefined4 err_reason)

{
  int iVar1;
  
  iVar1 = Mnu_FindText(uiMgr,err_reason);
  if (iVar1 != 0) {
    Ui_SetLabelText(uiMgr,dlg_type,*(undefined4 *)(iVar1 + 0x40));
    return;
  }
  Ui_SetLabelText(uiMgr,dlg_type,&DAT_00562b14);
  return;
}

