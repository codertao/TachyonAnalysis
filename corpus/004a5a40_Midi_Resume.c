
/* sweep */

undefined4 Midi_Resume(void)

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
  DAT_005648a8 = DAT_005648a8 + -1;
  if (DAT_005648a8 == 0) {
    *(undefined4 *)(DAT_00564894 + 0x10) = 4;
    midiStreamRestart(*(HMIDISTRM *)(DAT_00564894 + 0x24));
    DAT_005648b8 = DAT_006039f0;
  }
  return 0;
}

