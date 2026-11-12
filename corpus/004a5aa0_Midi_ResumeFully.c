
/* sweep */

int Midi_ResumeFully(void)

{
  int iVar1;
  
  iVar1 = Midi_Resume();
  while( true ) {
    if (iVar1 < 0) {
      return iVar1;
    }
    if (DAT_005648a8 < 1) break;
    iVar1 = Midi_Resume();
  }
  return 0;
}

