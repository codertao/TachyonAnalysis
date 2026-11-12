
/* CRT: "Runtime Error!" R60xx messages */

void __NMSG_WRITE(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  char acStackY_1e3 [7];
  undefined1 *puStackY_1dc;
  char *pcStackY_1d8;
  undefined4 uStackY_1d4;
  undefined1 *puStackY_1d0;
  undefined4 uStackY_1cc;
  undefined1 *puStackY_1c8;
  undefined *puStackY_1c4;
  LPCVOID lpBuffer;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  CHAR local_1a8 [260];
  undefined1 local_a4 [160];
  
  iVar5 = 0;
  pDVar2 = &DAT_00562370;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x562400);
  if (param_1 == (&DAT_00562370)[iVar5 * 2]) {
    if ((DAT_00564f74 == 1) || ((DAT_00564f74 == 0 && (DAT_005615d8 == 1)))) {
      lpNumberOfBytesWritten = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x562374);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      puStackY_1c4 = (undefined *)0x4c4d94;
      hFile = GetStdHandle(0xfffffff4);
      puStackY_1c4 = (undefined *)0x4c4d9b;
      WriteFile(hFile,lpBuffer,sVar4,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_1a8,0x104);
      if (DVar3 == 0) {
        _strcpy();
      }
      sVar4 = _strlen(local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen(local_1a8);
        puStackY_1c4 = (undefined *)0x4c4d15;
        _strncpy(acStackY_1e3 + sVar4,"...",3);
      }
      _strcpy();
      puStackY_1c4 = (undefined *)0x4c4d36;
      _strcat();
      puStackY_1c8 = local_a4;
      puStackY_1c4 = &DAT_0055dee0;
      uStackY_1cc = 0x4c4d47;
      _strcat();
      uStackY_1cc = *(undefined4 *)(iVar5 * 8 + 0x562374);
      puStackY_1d0 = local_a4;
      uStackY_1d4 = 0x4c4d59;
      _strcat();
      uStackY_1d4 = 0x12010;
      puStackY_1dc = local_a4;
      pcStackY_1d8 = "Microsoft Visual C++ Runtime Library";
      builtin_strncpy(acStackY_1e3 + 3,"oML",4);
      ___crtMessageBoxA();
    }
  }
  return;
}

