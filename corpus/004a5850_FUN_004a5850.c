
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a5850(void)

{
  int iVar1;
  MMRESULT MVar2;
  
  if (DAT_0055e394 != 0) {
    if (DAT_00564898 == 0) {
      return -1;
    }
    if (DAT_00564894 == 0) {
      return -1;
    }
    if (*(int *)(DAT_00564894 + 0x10) == 5) {
      FUN_004a5aa0();
    }
    if (*(int *)(DAT_00564894 + 0x10) == 4) {
      FUN_004a5900();
    }
    if ((*(int *)(DAT_00564894 + 0x10) != 3) &&
       (iVar1 = FUN_004a5ca0(0,*(undefined4 *)(DAT_00564894 + 0x14)), iVar1 < 0)) {
      return iVar1;
    }
    *(undefined4 *)(DAT_00564894 + 0x10) = 4;
    MVar2 = midiStreamRestart(*(HMIDISTRM *)(DAT_00564894 + 0x24));
    if (MVar2 != 0) {
      return -1;
    }
    DAT_005648a8 = 0;
    DAT_005648a4 = 1;
    _DAT_005648d0 = 1;
    DAT_005648b8 = DAT_006039f0;
  }
  return 0;
}

