
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a59e0(void)

{
  if (DAT_00564898 == 0) {
    return 0xffffffff;
  }
  if (DAT_00564894 == 0) {
    return 0xffffffff;
  }
  if (DAT_005648a4 == 0) {
    return 0xffffffff;
  }
  DAT_005648a8 = DAT_005648a8 + 1;
  if (DAT_005648a8 == 1) {
    *(undefined4 *)(DAT_00564894 + 0x10) = 5;
    midiStreamPause(*(HMIDISTRM *)(DAT_00564894 + 0x24));
    _DAT_005648d0 = 0;
  }
  return 0;
}

