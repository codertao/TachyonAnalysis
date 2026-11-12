
/* sweep */

void SndSample_Load(LPCSTR param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x23] == '\0') {
    iVar1 = mem_GetMemEx_probably_alloc(*(undefined4 *)(param_1 + 0x1c),4,0,param_1);
    if (iVar1 == 0) {
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
      return;
    }
    Fs_Seek(*(undefined4 *)(param_1 + 0x18),0);
    Fs_Read(iVar1,*(undefined4 *)(param_1 + 0x1c));
    iVar2 = Audio_LoadSampleMem(iVar1);
    if (iVar2 != iVar1) {
      OurFreeMem(iVar1);
      iVar1 = iVar2;
    }
    param_1[0x23] = '\x01';
    *(int *)(param_1 + 0x24) = iVar1;
  }
  return;
}

