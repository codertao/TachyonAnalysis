
/* sweep */

void SndTrig_InstallCallback(void)

{
  if (DAT_00563e94 == 0) {
    Audio_SetPostCallback(PTR_Asm_PostMainThreadCallback_0055da10);
    DAT_00563e94 = 1;
  }
  return;
}

