
/* sweep */

void Cursor_ClipToWindow(HWND param_1)

{
  RECT local_30;
  tagRECT local_20;
  tagRECT local_10;
  
  GetWindowRect(param_1,&local_20);
  GetClientRect(param_1,&local_10);
  local_30.left = local_20.left;
  local_30.right = local_20.left + 0x280;
  local_30.top = (local_10.top - local_10.bottom) + local_20.bottom;
  local_30.bottom = DAT_005a54f0 + 0x1df + local_30.top;
  if (local_30.bottom < local_10.bottom + local_20.top) {
    ClipCursor(&local_30);
    return;
  }
  local_30.bottom = local_30.top + 0x1e0;
  ClipCursor(&local_30);
  return;
}

