
/* sweep */

void DPlay_FreeAllSessions(void)

{
  while (DAT_0055e3e8 != 0) {
    Net_FreeSession(DAT_0055e3e8);
  }
  return;
}

