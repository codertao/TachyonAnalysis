
/* sweep */

int SndTrig_PreloadAll(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x1c);
  Fs_Open(param_1 + 0x3c);
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      if (*(char *)(iVar3 + 0x22) != '\0') {
        SndSample_LoadDefault(iVar3);
        iVar2 = iVar2 + 1;
        mark_alloc_memory_with_flags(*(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(param_1 + 0xc4));
      }
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0x34;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  Fs_Close();
  return iVar2;
}

