
/* sweep */

void CmdLine_RunPendingLaunch(void)

{
  if (DAT_00562ccc != 0) {
    Launch_RunPending();
    return;
  }
  return;
}

