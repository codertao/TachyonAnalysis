
undefined4 FUN_0044e110(LPSTR param_1,int param_2,DWORD *param_3,LPCSTR param_4)

{
  HANDLE hObject;
  BOOL BVar1;
  int iVar2;
  _STARTUPINFOA *p_Var3;
  _PROCESS_INFORMATION local_54;
  _STARTUPINFOA local_44;
  
  hObject = CreateFileA(param_4,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hObject == (HANDLE)0xffffffff) {
    return 0xffffffff;
  }
  p_Var3 = &local_44;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    p_Var3->cb = 0;
    p_Var3 = (_STARTUPINFOA *)&p_Var3->lpReserved;
  }
  local_44.cb = 0x44;
  local_44.lpReserved = (LPSTR)0x0;
  local_44.lpDesktop = (LPSTR)0x0;
  local_44.lpTitle = (LPSTR)0x0;
  local_44.dwX = 0;
  local_44.dwY = 0;
  local_44.dwXSize = 0;
  local_44.dwYSize = 0;
  local_44.dwXCountChars = 0;
  local_44.dwYCountChars = 0;
  local_44.dwFillAttribute = 0;
  local_44.dwFlags = 0x101;
  local_44.wShowWindow = 7;
  local_44.cbReserved2 = 0;
  local_44.lpReserved2 = (LPBYTE)0x0;
  local_44.hStdInput = GetStdHandle(0xfffffff6);
  local_44.hStdOutput = hObject;
  local_44.hStdError = GetStdHandle(0xfffffff4);
  BVar1 = CreateProcessA((LPCSTR)0x0,param_1,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0
                         ,0x820,(LPVOID)0x0,(LPCSTR)0x0,&local_44,&local_54);
  CloseHandle(hObject);
  if (BVar1 == 0) {
    return 0xffffffff;
  }
  if (param_2 != 0) {
    param_4 = (LPCSTR)0x103;
    do {
      GetExitCodeProcess(local_54.hProcess,(LPDWORD)&param_4);
    } while (param_4 == (LPCSTR)0x103);
    if (param_3 != (DWORD *)0x0) {
      *param_3 = (DWORD)param_4;
    }
  }
  return 0;
}

