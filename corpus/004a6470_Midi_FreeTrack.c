
/* sweep */

undefined4 Midi_FreeTrack(HLOCAL param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)((int)param_1 + 0x80) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x80));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)((int)param_1 + 0x80));
    GlobalFree(pvVar1);
  }
  LocalFree(param_1);
  return 0;
}

