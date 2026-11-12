
/* sweep: CLFREE.TXT */

void TachCli_Shutdown(void)

{
  DAT_005b905c = 0;
  if (DAT_005b9048 == 0) {
    DAT_005b9048 = 1;
    return;
  }
  Player_Unlink();
  if ((g_FlightStateFlags & 1) == 0) {
    DescReg_ShutdownAll();
  }
  Bdf_FreeAll();
  Snd3D_StopAll();
  DAT_005b3394 = 0;
  Mem_DumpAllPoolsToFile(s_CLFREE_TXT_00534318);
  return;
}

