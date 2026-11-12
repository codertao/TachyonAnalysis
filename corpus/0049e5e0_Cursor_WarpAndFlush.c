
/* sweep: guess */

void Cursor_WarpAndFlush(void)

{
  int iVar1;
  int iVar2;
  tagPOINT local_34;
  tagRECT local_2c;
  tagMSG local_1c;
  
  local_34.x = 0;
  local_34.y = 0;
  iVar2 = PeekMessageA(&local_1c,GLBL_WindowHandle_,0x200,0x209,1);
  while (iVar2 != 0) {
    Input_OnMouseMsg(local_1c.wParam,local_1c.lParam,local_1c.message,1);
    iVar2 = PeekMessageA(&local_1c,GLBL_WindowHandle_,0x200,0x209,1);
  }
  GetClientRect(GLBL_WindowHandle_,&local_2c);
  ClientToScreen(GLBL_WindowHandle_,&local_34);
  iVar1 = DAT_00603e44;
  iVar2 = DAT_00603e40;
  SetCursorPos((local_2c.right - local_2c.left >> 1) + local_34.x,
               (local_2c.bottom - local_2c.top >> 1) + local_34.y);
  DAT_00603e4c = iVar2 - (local_2c.right - local_2c.left >> 1);
  DAT_00603e50 = iVar1 - (local_2c.bottom - local_2c.top >> 1);
  return;
}

