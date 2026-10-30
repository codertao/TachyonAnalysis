
undefined4 FUN_004b5160(LPCSTR param_1,undefined4 param_2)

{
  int iVar1;
  BOOL BVar2;
  undefined *lpBuffer;
  uint uVar3;
  DWORD local_4;
  
  if (DAT_006af504 != 0) {
    FUN_004b5510();
    DAT_006af504 = 0;
  }
  if (DAT_006af508 != 0) {
    FUN_004b5550();
    DAT_006af504 = 0;
  }
  if (DAT_00563e98 == 0) {
    return 0;
  }
  DAT_006af500 = CreateFileA(param_1,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,(HANDLE)0x0
                            );
  if (DAT_006af500 == (HANDLE)0xffffffff) {
    return 0;
  }
  FUN_004b5b60(s_GEcho_0055ed28,DAT_0055ee48);
  iVar1 = FUN_004b57e0(param_2);
  if (iVar1 != 0) {
    ReadFile(DAT_006af500,&DAT_006af4e0,0x18,&local_4,(LPOVERLAPPED)0x0);
    if (DAT_006af4e0 != DAT_0055ee4c) {
      return 0;
    }
    SetFilePointer(DAT_006af500,DAT_006af4f0,(PLONG)0x0,0);
    uVar3 = 0;
    if (DAT_006af4f4 != 0) {
      lpBuffer = &DAT_0066b640;
      do {
        BVar2 = ReadFile(DAT_006af500,lpBuffer,0x20,&local_4,(LPOVERLAPPED)0x0);
        if (BVar2 == 0) {
          return 0;
        }
        uVar3 = uVar3 + 1;
        lpBuffer = lpBuffer + 0x20;
      } while (uVar3 < DAT_006af4f4);
    }
    DAT_006af508 = 1;
    return 1;
  }
  return 0;
}

