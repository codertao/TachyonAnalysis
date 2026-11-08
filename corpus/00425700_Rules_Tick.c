
/* rules +0x04 */

void Rules_Tick(void)

{
  if ((g_ActiveRules != 0) && (*(code **)(g_ActiveRules + 4) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00425710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(g_ActiveRules + 4))();
    return;
  }
  return;
}

