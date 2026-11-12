
/* sweep */

void Rules_CallHook14(void)

{
  if ((g_ActiveRules != 0) && (*(code **)(g_ActiveRules + 0x14) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004257b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(g_ActiveRules + 0x14))();
    return;
  }
  return;
}

