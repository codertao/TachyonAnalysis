
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a5900(void)

{
  int iVar1;
  MMRESULT MVar2;
  
  if (DAT_00564898 == 0) {
    return 0xffffffff;
  }
  if (DAT_00564894 != 0) {
    if ((*(int *)(DAT_00564894 + 0x10) != 4) && (*(int *)(DAT_00564894 + 0x10) != 5)) {
      *(uint *)(DAT_00564894 + 0x48) = *(uint *)(DAT_00564894 + 0x48) & 0xfffffffb;
      return 0;
    }
    *(undefined4 *)(DAT_00564894 + 0x10) = 6;
    *(uint *)(DAT_00564894 + 0x48) = *(uint *)(DAT_00564894 + 0x48) | 4;
    MVar2 = midiStreamStop(*(HMIDISTRM *)(DAT_00564894 + 0x24));
    *(MMRESULT *)(DAT_00564894 + 0x1c) = MVar2;
    if (*(int *)(DAT_00564894 + 0x1c) == 0) {
      iVar1 = *(int *)(DAT_00564894 + 0x3c);
      while (iVar1 != 0) {
        Sleep(0);
        iVar1 = *(int *)(DAT_00564894 + 0x3c);
      }
      iVar1 = *(int *)(DAT_00564894 + 0x10);
      while (iVar1 == 6) {
        Sleep(1);
        iVar1 = *(int *)(DAT_00564894 + 0x10);
      }
      DAT_005648a4 = 0;
      DAT_005648a8 = 0;
      DAT_005648c8 = 0;
      _DAT_005648d0 = 0;
      return 0;
    }
    *(uint *)(DAT_00564894 + 0x48) = *(uint *)(DAT_00564894 + 0x48) & 0xfffffffb;
    return 0xffffffff;
  }
  return 0xffffffff;
}

