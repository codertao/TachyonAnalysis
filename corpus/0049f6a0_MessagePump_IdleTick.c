
/* PeekMessageA loop; idle: timed tasks / audio pump / periodic poll; breaks on WM_QUIT */

void MessagePump_IdleTick(void)

{
  int iVar1;
  tagMSG local_1c;
  
  iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
  while( true ) {
    if (iVar1 == 0) {
      FUN_004a9b50();
      FUN_0049e810();
      FUN_004a6420();
      return;
    }
    if (local_1c.message == 0x12) break;
    TranslateMessage(&local_1c);
    DispatchMessageA(&local_1c);
    iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
  }
  return;
}

