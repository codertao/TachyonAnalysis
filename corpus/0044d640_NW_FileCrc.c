
/* CRC of a whole file (tachyon.cmd), -1 if missing */

undefined4 NW_FileCrc(LPCSTR param_1)

{
  HANDLE hFile;
  DWORD nNumberOfBytesToRead;
  undefined4 uVar1;
  DWORD local_4;
  
  uVar1 = 0xffffffff;
  hFile = CreateFileA(param_1,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    nNumberOfBytesToRead = GetFileSize(hFile,(LPDWORD)0x0);
    if (nNumberOfBytesToRead != 0xffffffff) {
      FUN_0048e3d0(&param_1,nNumberOfBytesToRead,4,s_ibrowse_temp_crc_005480f4,0xa000);
      if (param_1 != (LPCSTR)0x0) {
        ReadFile(hFile,param_1,nNumberOfBytesToRead,&local_4,(LPOVERLAPPED)0x0);
        if (local_4 == nNumberOfBytesToRead) {
          uVar1 = FUN_0044e230(param_1,nNumberOfBytesToRead);
        }
        OurFreeMem(param_1);
      }
    }
    CloseHandle(hFile);
    return uVar1;
  }
  return 0xffffffff;
}

