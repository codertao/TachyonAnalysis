
void FUN_0049e570(void)

{
  tagPOINT local_18;
  tagRECT local_10;
  
  local_18.x = 0;
  local_18.y = 0;
  ClientToScreen(DAT_0060395c,&local_18);
  GetWindowRect(DAT_0060395c,&local_10);
  DAT_00603e44 = local_10.bottom - local_10.top >> 1;
  DAT_00603e40 = local_10.right - local_10.left >> 1;
  SetCursorPos(DAT_00603e40 + local_18.x,DAT_00603e44 + local_18.y);
  return;
}

