
void FUN_0042fee0(void)

{
  tagPOINT local_8;
  
  local_8.x = 0;
  local_8.y = 0;
  ClientToScreen(DAT_0060395c,&local_8);
  DAT_00603e40 = 0x140;
  DAT_00603e44 = 0xf0;
  SetCursorPos(local_8.x + 0x140,local_8.y + 0xf0);
  return;
}

