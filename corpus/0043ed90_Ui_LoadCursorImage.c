
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: XCursor.scratch */

void Ui_LoadCursorImage(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((((param_2 != 0) && (DAT_005a548c != '\0')) && (DAT_005a5480 != 0)) &&
     (iVar2 = __stricmp(&DAT_005a548c,param_2), iVar2 == 0)) {
    return;
  }
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = MnuImage_Find(param_1,param_2);
  }
  if (DAT_00564ae4 == 0) {
    Input_SetVar3e6c(0);
    Vid_SetFlag_602328(Ui_DrawCursor);
    Vid_SetFlag_60232c(&LAB_0043ea60);
    if (DAT_006022f4 == 1) {
      Ui_HideCursor();
      Cursor_ForceShow();
      return;
    }
  }
  else {
    Input_SetVar3e6c(&LAB_0043ecb0);
  }
  Ui_ShowCursor();
  Cursor_ForceHide();
  if (iVar2 != 0) {
    MnuImage_Free(param_1,iVar2);
    MnuImage_LoadPcxRemapped(param_1,iVar2,*(undefined4 *)(iVar2 + 0x1680),0);
    Ui_ClearCursorHotspot();
    iVar1 = *(int *)(iVar2 + 0x60);
    if (iVar1 != 0) {
      DAT_005a5480 = iVar1;
      if (DAT_005a5484 != 0) {
        OurFreeMem(DAT_005a5484);
      }
      str_sprintf(&DAT_005a548c,param_2);
      DAT_005a54ec = *(undefined4 *)(iVar2 + 0x166c);
      DAT_005a54f0 = *(int *)(iVar2 + 0x1670) / param_3;
      DAT_005a54d0 = *(int *)(iVar2 + 0x1664);
      _DAT_005a54d4 = *(int *)(iVar2 + 0x1668);
      _DAT_005a5488 = DAT_005a5480;
      DAT_005a54f4 = DAT_00603e40;
      _DAT_005a54cc = DAT_0060448c;
      DAT_005a54d8 = param_3;
      DAT_005a54e0 = param_4;
      DAT_005a54dc = 0;
      DAT_005a54e4 = 0;
      DAT_005a54f8 = DAT_00603e44;
      Mem_AllocTagged(&DAT_005a5484,DAT_0060448c * _DAT_005a54d4 * DAT_005a54d0,4,
                      s_XCursor_scratch_0053fec4,0xa000);
      DAT_005a5504 = 1;
    }
  }
  return;
}

