
/* read the template and substitute the code; MULTI_NW_ERROR1 text if missing */

void NW_LoadPageTemplate(LPCSTR param_1,char *param_2,undefined4 *param_3,DWORD *param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  HANDLE hFile;
  LPCSTR nNumberOfBytesToRead;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  
  bVar2 = false;
  hFile = CreateFileA(param_1,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  puVar3 = param_3;
  if (hFile != (HANDLE)0xffffffff) {
    nNumberOfBytesToRead = (LPCSTR)GetFileSize(hFile,(LPDWORD)0x0);
    Mem_AllocZeroTagged(puVar3,nNumberOfBytesToRead,4,s_CC_bin_buf_005481f8,0xa000);
    *param_4 = (DWORD)nNumberOfBytesToRead;
    ReadFile(hFile,(LPVOID)*puVar3,(DWORD)nNumberOfBytesToRead,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    pcVar8 = param_2;
    if (param_1 == nNumberOfBytesToRead) {
      pcVar4 = _strstr((char *)*puVar3,param_2 + 2);
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = *pcVar8;
        pcVar4[1] = pcVar8[1];
      }
      bVar2 = true;
    }
    else {
      OurFreeMem(*puVar3);
    }
    CloseHandle(hFile);
    if (bVar2) {
      return;
    }
  }
  iVar5 = Mnu_FindText(&g_UiManager,s_MULTI_NW_ERROR1_005481e8);
  if (iVar5 == 0) {
    uVar6 = __strdup(s_<HTML>_<BODY>_<H1>_Fatal_Error<__0054818c);
    *puVar3 = uVar6;
  }
  else {
    *puVar3 = *(undefined4 *)(iVar5 + 0x40);
  }
  uVar7 = 0xffffffff;
  pcVar8 = (char *)*puVar3;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  *param_4 = ~uVar7 - 1;
  return;
}

