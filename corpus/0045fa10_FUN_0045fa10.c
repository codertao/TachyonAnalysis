
void FUN_0045fa10(short *param_1)

{
  if (*param_1 == 1) {
    FUN_0045f990(g_SrvCurConn,*(undefined4 *)(param_1 + 1),param_1[3]);
  }
  else if (*param_1 == 2) {
    g_SrvCurConn->inQuadrant = 1;
    return;
  }
  return;
}

