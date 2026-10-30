
void FUN_0044df10(undefined4 *param_1)

{
  bool bVar1;
  HANDLE hFile;
  DWORD DVar2;
  DWORD local_4;
  
  bVar1 = false;
  hFile = CreateFileA(s_CC_BIN_00548184,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    DVar2 = GetFileSize(hFile,(LPDWORD)0x0);
    if ((3 < DVar2) && (ReadFile(hFile,param_1,4,&local_4,(LPOVERLAPPED)0x0), local_4 == 4)) {
      bVar1 = true;
    }
    CloseHandle(hFile);
    if (bVar1) {
      return;
    }
  }
  *param_1 = DAT_0054817c;
  *(undefined1 *)(param_1 + 1) = DAT_00548180;
  return;
}

