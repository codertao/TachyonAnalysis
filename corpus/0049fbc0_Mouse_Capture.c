
/* sweep */

void Mouse_Capture(void)

{
  DAT_0060396c = 1;
  DAT_00603970 = 1;
  SetCapture(GLBL_WindowHandle_);
  return;
}

