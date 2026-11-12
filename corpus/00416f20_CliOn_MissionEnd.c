
/* S->C 0x1031 handler */

void CliOn_MissionEnd(int *param_1)

{
  if (((*param_1 == -1) && (param_1[1] == -1)) && (param_1[2] == -1)) {
    g_MissionEndFlag = 1;
    g_MissionEndReason = 4;
    g_NextMode = g_ReturnMode;
    return;
  }
  Nop(*param_1);
  Nop(param_1[1]);
  Nop(param_1[2]);
  return;
}

