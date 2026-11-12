
/* sweep */

void Video_InitCursor(undefined4 *param_1)

{
  if ((DAT_005a6808 == 0) && (DAT_00564ae4 == 0)) {
    Cursor_ForceHide();
    Vid_SetResEx(*param_1,param_1[1],0,*param_1,param_1[1]);
  }
  else {
    DAT_005a6808 = 1;
    Cursor_ForceShow();
    Vid_SetResEx(*param_1,param_1[1],1,*param_1,param_1[1]);
    if (DAT_00564ae4 != 0) {
      Mouse_Capture();
      Video_ClipCursor();
      return;
    }
  }
  return;
}

