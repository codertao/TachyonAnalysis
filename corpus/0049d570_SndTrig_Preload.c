
/* sweep */

undefined4 SndTrig_Preload(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = SndTrig_FindByName(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(iVar1 + 0x23) == '\0') {
    Fs_Open(param_2 + 0x3c);
    SndSample_LoadDefault(iVar1);
    Fs_Close();
  }
  mark_alloc_memory_with_flags(*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(param_2 + 0xc4));
  return *(undefined4 *)(iVar1 + 0x24);
}

