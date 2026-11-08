
/* rules +0x10 */

void Rules_Shutdown(void)

{
  if ((g_ActiveRules != 0) && (*(code **)(g_ActiveRules + 0x10) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00425790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(g_ActiveRules + 0x10))();
    return;
  }
  return;
}

