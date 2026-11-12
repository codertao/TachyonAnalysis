
/* sweep: guess */

void Cursor_CenterInWindow(void)

{
  tagPOINT local_18;
  tagRECT local_10;
  
  local_18.x = 0;
  local_18.y = 0;
  ClientToScreen(GLBL_WindowHandle_,&local_18);
  GetWindowRect(GLBL_WindowHandle_,&local_10);
  DAT_00603e44 = local_10.bottom - local_10.top >> 1;
  DAT_00603e40 = local_10.right - local_10.left >> 1;
  SetCursorPos(DAT_00603e40 + local_18.x,DAT_00603e44 + local_18.y);
  return;
}

