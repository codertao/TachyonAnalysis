
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a9000(LPCSTR param_1)

{
  HANDLE hFile;
  DWORD local_34;
  undefined1 local_30 [34];
  uint local_e;
  
  if (DAT_005648e4 != 0) {
    FUN_004a8fd0();
  }
  DAT_005648e4 = 0;
  hFile = CreateFileA(param_1,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    _DAT_005f9d50 = GetFileSize(hFile,(LPDWORD)0x0);
    ReadFile(hFile,local_30,0x30,&local_34,(LPOVERLAPPED)0x0);
    DAT_005f9d4c = local_e & 0xffff;
    DAT_005648e4 = 1;
    DAT_005f9d48 = 0x4000;
    DAT_00601e54 = hFile;
    FUN_004cc601();
  }
  return 0;
}

