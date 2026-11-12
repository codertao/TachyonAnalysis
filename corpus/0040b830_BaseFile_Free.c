
/* sweep */

void BaseFile_Free(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      ModelRef_Release(iVar2);
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (uVar1 < *(uint *)(param_1 + 0xc));
  }
  BaseFile_FreeSoundLoops(*(undefined4 *)(param_1 + 8));
  OurFreeMem(*(undefined4 *)(param_1 + 0x10));
  OurFreeMem(*(undefined4 *)(param_1 + 4));
  OurFreeMem(param_1);
  return;
}

