
/* sweep: mission end reason 5/6 */

void TachCli_OnDisconnect(int param_1)

{
  g_MissionEndFlag = 1;
  if (param_1 == 1) {
    g_MissionEndReason = 5;
    g_NextMode = g_ReturnMode;
    return;
  }
  if (param_1 == 2) {
    g_MissionEndReason = 6;
    g_NextMode = g_ReturnMode;
    return;
  }
  if (param_1 == 3) {
    g_MissionEndReason = 4;
    g_NextMode = g_ReturnMode;
    return;
  }
  if (param_1 == 4) {
    g_MissionEndReason = 7;
    g_NextMode = g_ReturnMode;
    return;
  }
  if (param_1 == 5) {
    g_MissionEndReason = 1;
    g_NextMode = g_ReturnMode;
    return;
  }
  g_NextMode = g_ReturnMode;
  g_MissionEndReason = ((param_1 != 6) - 1 & 3) + 5;
  return;
}

