
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Midi_Shutdown(void)

{
  HGLOBAL pvVar1;
  
  if (DAT_00564898 != 0) {
    if (*(int *)((int)DAT_00564894 + 0x10) == 5) {
      Midi_ResumeFully();
    }
    if (*(int *)((int)DAT_00564894 + 0x10) == 4) {
      Midi_Stop();
    }
    if (*(int *)((int)DAT_00564894 + 0x10) == 1) {
      Midi_Close();
    }
    if (*(LPCVOID *)((int)DAT_00564894 + 0x2c) != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)DAT_00564894 + 0x2c));
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(*(LPCVOID *)((int)DAT_00564894 + 0x2c));
      GlobalFree(pvVar1);
    }
    LocalFree(DAT_00564894);
    DAT_00564894 = (HLOCAL)0x0;
    DAT_00564898 = 0;
    _DAT_005648a0 = 0;
    DAT_005648a4 = 0;
    DAT_005648a8 = 0;
    DAT_005648c8 = 0;
    _DAT_005648d0 = 0;
    Midi_FreeAllBuffers();
  }
  return;
}

