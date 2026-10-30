
int FUN_0044e800(LPSTR param_1,int param_2)

{
  BOOL BVar1;
  int iVar2;
  _STARTUPINFOA *p_Var3;
  _PROCESS_INFORMATION local_54;
  _STARTUPINFOA local_44;
  
  p_Var3 = &local_44;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    p_Var3->cb = 0;
    p_Var3 = (_STARTUPINFOA *)&p_Var3->lpReserved;
  }
  local_44.dwFlags = 1;
  local_44.wShowWindow = 1;
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
  local_44.cbReserved2 = 0;
  local_44.lpReserved2 = (LPBYTE)0x0;
  local_44.hStdInput = (HANDLE)0x0;
  local_44.hStdOutput = (HANDLE)0x0;
  local_44.hStdError = (HANDLE)0x0;
  BVar1 = CreateProcessA((LPCSTR)0x0,param_1,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0
                         ,0x820,(LPVOID)0x0,(LPCSTR)0x0,&local_44,&local_54);
  if (BVar1 == 0) {
    return -1;
  }
  if (param_2 == 0) {
    return 0;
  }
  param_1 = (LPSTR)0x103;
  do {
    GetExitCodeProcess(local_54.hProcess,(LPDWORD)&param_1);
  } while (param_1 == (LPSTR)0x103);
  return (DWORD)param_1;
}

