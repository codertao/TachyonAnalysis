
undefined4 App_InstanceInit(HINSTANCE param_1)

{
  WNDCLASSA local_28;
  
  local_28.hInstance = param_1;
  local_28.style = 0;
  local_28.lpfnWndProc = (WNDPROC)&LAB_0049edd0;
  local_28.cbClsExtra = 0;
  local_28.cbWndExtra = 0;
  local_28.hIcon = LoadIconA(param_1,(LPCSTR)0x7f00);
  local_28.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_28.hbrBackground = GetStockObject(4);
  local_28.lpszMenuName = (LPCSTR)0x0;
  local_28.lpszClassName = s_NLGAMECLASS_0055deb4;
  RegisterClassA(&local_28);
  return 1;
}

