
/* sweep */

undefined4 Ui_SetCursor(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Mnu_FindCursor(param_1,param_2);
  if (iVar1 != 0) {
    DAT_00562bec = MnuImage_Find(param_1,iVar1 + 0x40);
    if (DAT_00562bec != 0) {
      Ui_LoadCursorImage(param_1,iVar1 + 0x40,*(undefined4 *)(DAT_00562bec + 0x1680),
                         *(undefined4 *)(iVar1 + 0x80));
      Ui_SetCursorHotspot(*(undefined4 *)(iVar1 + 0x84),*(undefined4 *)(iVar1 + 0x88));
    }
    if ((DAT_00564ae4 == 0) && (DAT_006022f4 == 1)) {
      Ui_ClearCursorHotspot();
      Ui_HideCursor();
      Cursor_ForceShow();
    }
    return 1;
  }
  return 0;
}

