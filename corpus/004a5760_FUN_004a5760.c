
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a5760(void)

{
  LPMIDIHDR pmh;
  
  if (DAT_00564898 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(DAT_00564894 + 0x10) != 0) {
    if (*(int *)(DAT_00564894 + 0x10) == 5) {
      FUN_004a5aa0();
    }
    if (*(int *)(DAT_00564894 + 0x10) == 4) {
      FUN_004a5900();
    }
    if (*(int *)(DAT_00564894 + 0x10) != 1) {
      return 0xffffffff;
    }
    if (*(int *)(DAT_00564894 + 0x20) != 0) {
      FUN_004a6470(*(int *)(DAT_00564894 + 0x20));
      *(undefined4 *)(DAT_00564894 + 0x20) = 0;
    }
    for (pmh = *(LPMIDIHDR *)(DAT_00564894 + 0x30); pmh != (LPMIDIHDR)0x0; pmh = pmh->lpNext) {
      midiOutUnprepareHeader(*(HMIDIOUT *)(DAT_00564894 + 0x24),pmh,0x40);
    }
    if (*(LPMIDIHDR *)(DAT_00564894 + 0x34) != (LPMIDIHDR)0x0) {
      midiOutUnprepareHeader
                (*(HMIDIOUT *)(DAT_00564894 + 0x24),*(LPMIDIHDR *)(DAT_00564894 + 0x34),0x40);
    }
    if (*(HMIDISTRM *)(DAT_00564894 + 0x24) != (HMIDISTRM)0x0) {
      midiStreamClose(*(HMIDISTRM *)(DAT_00564894 + 0x24));
      *(undefined4 *)(DAT_00564894 + 0x24) = 0;
    }
    *(undefined4 *)(DAT_00564894 + 0x10) = 0;
    _DAT_005648a0 = 0;
    DAT_005648a4 = 0;
    DAT_005648a8 = 0;
    DAT_005648c8 = 0;
    _DAT_005648d0 = 0;
  }
  return 0;
}

