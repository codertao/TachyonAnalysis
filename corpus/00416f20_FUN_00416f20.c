
void FUN_00416f20(int *param_1)

{
  if (((*param_1 == -1) && (param_1[1] == -1)) && (param_1[2] == -1)) {
    g_MissionEndFlag = 1;
    g_MissionEndReason = 4;
    g_NextMode = g_ReturnMode;
    return;
  }
  FUN_00445720(*param_1);
  FUN_00445720(param_1[1]);
  FUN_00445720(param_1[2]);
  return;
}

