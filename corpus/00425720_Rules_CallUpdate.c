
/* sweep: g_ActiveRules +8 */

void Rules_CallUpdate(void)

{
  if ((g_ActiveRules != 0) && (*(code **)(g_ActiveRules + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00425730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(g_ActiveRules + 8))();
    return;
  }
  return;
}

