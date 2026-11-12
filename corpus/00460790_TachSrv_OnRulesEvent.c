
/* sweep: rules +0x5c */

void TachSrv_OnRulesEvent(undefined4 *param_1)

{
  if (*(code **)(g_ActiveRules + 0x5c) != (code *)0x0) {
    (**(code **)(g_ActiveRules + 0x5c))(g_SrvCurConn,*param_1);
  }
  return;
}

