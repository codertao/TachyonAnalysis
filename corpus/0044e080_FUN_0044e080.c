
void FUN_0044e080(void)

{
  HANDLE hFile;
  DWORD local_10;
  LPCVOID local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  local_8 = 0;
  local_4 = 0;
  FUN_0044df10(&local_8);
  FUN_0044df90(s_startup_htm_00548204,&local_8,&local_c,&local_10);
  hFile = CreateFileA(s_lstartup_htm_00547f80,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x100,
                      (HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    WriteFile(hFile,local_c,local_10,&local_10,(LPOVERLAPPED)0x0);
    FUN_0049c530(local_c);
    CloseHandle(hFile);
  }
  return;
}

