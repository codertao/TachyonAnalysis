
/* sweep */

void SndStream_Close(void)

{
  DAT_005648e4 = 0;
  DAT_0055e6e8 = 0xffffffff;
  SndAsm_ResetStreams();
  CloseHandle(DAT_00601e54);
  return;
}

