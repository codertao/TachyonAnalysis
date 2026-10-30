
void FUN_00451a10(void)

{
  HWND hWnd;
  tagRECT *lpRect;
  tagRECT local_30;
  tagRECT local_20;
  tagRECT local_10;
  
  lpRect = &local_30;
  if (DAT_005a681c == 0) {
    GetWindowRect(DAT_0060395c,&local_10);
    GetClientRect(DAT_0060395c,&local_20);
    local_30.top = (local_20.top - local_20.bottom) + local_10.bottom;
    local_30.right = local_20.right + local_10.left;
    local_30.left = local_10.left;
    local_30.bottom = local_20.bottom + local_10.top;
    ClipCursor(&local_30);
    return;
  }
  hWnd = GetDesktopWindow();
  GetWindowRect(hWnd,lpRect);
  ClipCursor(&local_30);
  return;
}

