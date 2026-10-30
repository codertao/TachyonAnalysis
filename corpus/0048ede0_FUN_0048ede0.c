
undefined4 FUN_0048ede0(LPCSTR param_1)

{
  HANDLE hFindFile;
  BOOL BVar1;
  _WIN32_FIND_DATAA local_280;
  _WIN32_FIND_DATAA local_140;
  
  hFindFile = FindFirstFileA(param_1,&local_280);
  if (hFindFile == (HANDLE)0xffffffff) {
    return 0;
  }
  BVar1 = FindNextFileA(hFindFile,&local_140);
  if (BVar1 != 0) {
    FindClose(hFindFile);
    return 0;
  }
  if (((byte)local_280.dwFileAttributes & 0x10) != 0) {
    FindClose(hFindFile);
    return 0;
  }
  FindClose(hFindFile);
  return 1;
}

