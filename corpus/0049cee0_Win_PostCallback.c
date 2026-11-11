
/* PostMessage(hwnd, 0x400, fn, arg) */

void Win_PostCallback(LPARAM param_1)

{
  PostMessageA(GLBL_WindowHandle_,0x400,0x49ce90,param_1);
  return;
}

