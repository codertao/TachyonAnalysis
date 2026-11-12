
/* sweep */

void SpRules_CallHook88(void)

{
  if (*(code **)(g_ActiveRules + 0x88) != (code *)0x0) {
    (**(code **)(g_ActiveRules + 0x88))(0);
    return;
  }
  NetCli_SendRespawn();
  return;
}

