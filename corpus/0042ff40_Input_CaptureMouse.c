
/* sweep */

void Input_CaptureMouse(void)

{
  tagRECT local_10;
  
  GetClientRect(GLBL_WindowHandle_,&local_10);
  Input_ResetMouseState();
  Input_CenterCursor();
  if (DAT_005b2b38 == 0) {
    DAT_005aeed0 = 1;
  }
  DAT_005aeec0 = 0x140;
  DAT_005aeec4 = 0xf0;
  return;
}

