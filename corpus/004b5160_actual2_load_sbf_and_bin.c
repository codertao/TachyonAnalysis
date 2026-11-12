
undefined4 actual2_load_sbf_and_bin(LPCSTR sbf_file,LPCSTR bin_file)

{
  int iVar1;
  BOOL BVar2;
  undefined *lpBuffer;
  uint uVar3;
  DWORD local_4;
  
  if (DAT_006af504 != 0) {
    Music_Stop();
    DAT_006af504 = 0;
  }
  if (DAT_006af508 != 0) {
    Music_Close();
    DAT_006af504 = 0;
  }
  if (GLBL_audio_running == 0) {
    return 0;
  }
  GLBL_sbf_file_handle =
       CreateFileA(sbf_file,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x8000080,(HANDLE)0x0);
  if (GLBL_sbf_file_handle == (HANDLE)0xffffffff) {
    return 0;
  }
  MusScr_SetNativeTable(s_GEcho_0055ed28,DAT_0055ee48);
  iVar1 = load_bin_scr_file(bin_file);
  if (iVar1 != 0) {
    ReadFile(GLBL_sbf_file_handle,&DAT_006af4e0,0x18,&local_4,(LPOVERLAPPED)0x0);
    if (DAT_006af4e0 != DAT_0055ee4c) {
      return 0;
    }
    SetFilePointer(GLBL_sbf_file_handle,DAT_006af4f0,(PLONG)0x0,0);
    uVar3 = 0;
    if (DAT_006af4f4 != 0) {
      lpBuffer = &DAT_0066b640;
      do {
        BVar2 = ReadFile(GLBL_sbf_file_handle,lpBuffer,0x20,&local_4,(LPOVERLAPPED)0x0);
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

