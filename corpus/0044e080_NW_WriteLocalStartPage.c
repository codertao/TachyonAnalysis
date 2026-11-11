
/* startup.htm with the "qq" placeholder replaced by the cc.bin country code -> lstartup.htm */

void NW_WriteLocalStartPage(void)

{
  HANDLE hFile;
  DWORD local_10;
  LPCVOID local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  local_8 = 0;
  local_4 = 0;
  NW_ReadCountryCode(&local_8);
  NW_LoadPageTemplate(s_startup_htm_00548204,&local_8,&local_c,&local_10);
  hFile = CreateFileA(s_lstartup_htm_00547f80,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x100,
                      (HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    WriteFile(hFile,local_c,local_10,&local_10,(LPOVERLAPPED)0x0);
    OurFreeMem(local_c);
    CloseHandle(hFile);
  }
  return;
}

