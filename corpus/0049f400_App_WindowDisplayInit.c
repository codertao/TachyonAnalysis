
undefined4 App_WindowDisplayInit(HINSTANCE param_1,int param_2)

{
  HWND hWnd;
  tagRECT local_a0;
  tagRECT local_90;
  CHAR local_80 [128];
  
  if ((DAT_00603940 != 0) && (DAT_00603944 != 0)) {
    str_sprintf(local_80,s__s__s_005336a4,DAT_00603940,DAT_00603944);
  }
  hWnd = GetDesktopWindow();
  GetWindowRect(hWnd,&local_a0);
  local_a0.left = (local_a0.right - local_a0.left >> 1) + -0x140;
  local_a0.top = (local_a0.bottom - local_a0.top >> 1) + -0xf0;
  DAT_00603960 = param_1;
  local_90.left = 0;
  local_90.top = 0;
  local_90.right = 0x27f;
  local_90.bottom = 0x1df;
  AdjustWindowRect(&local_90,0xcf0000,0);
  DAT_0060395c = CreateWindowExA(0,s_NLGAMECLASS_0055deb4,local_80,0x16ca0000,
                                 local_90.left + local_a0.left,local_90.top + local_a0.top,
                                 local_90.right - local_90.left,local_90.bottom - local_90.top,
                                 (HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0);
  GetWindowRect(DAT_0060395c,&local_a0);
  DAT_00603974 = local_a0.left;
  DAT_00603980 = local_a0.bottom;
  DAT_00603978 = local_a0.right;
  DAT_0060397c = local_a0.top;
  if (DAT_0060395c == (HWND)0x0) {
    return 0;
  }
  ShowWindow(DAT_0060395c,param_2);
  UpdateWindow(DAT_0060395c);
  return 1;
}

