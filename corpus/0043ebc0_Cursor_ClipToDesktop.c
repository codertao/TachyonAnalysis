
/* sweep */

void Cursor_ClipToDesktop(void)

{
  bool bVar1;
  HWND hWnd;
  tagRECT *lpRect;
  tagRECT local_10;
  
  lpRect = &local_10;
  hWnd = GetDesktopWindow();
  GetWindowRect(hWnd,lpRect);
  local_10.left = 0;
  local_10.top = 0;
  local_10.right = 0x280;
  bVar1 = local_10.bottom <= DAT_005a54f0 + 0x1df;
  local_10.bottom = DAT_005a54f0 + 0x1df;
  if (bVar1) {
    local_10.bottom = 0x1e0;
  }
  ClipCursor(&local_10);
  return;
}

