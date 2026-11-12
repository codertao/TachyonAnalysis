
/* sweep */

void Midi_FreeAllBuffers(void)

{
  while (DAT_005648ac != 0) {
    Midi_FreeBuffer(DAT_005648ac);
  }
  return;
}

