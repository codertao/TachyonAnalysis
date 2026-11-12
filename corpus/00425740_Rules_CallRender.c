
/* sweep: g_ActiveRules +0xc */

void Rules_CallRender(void)

{
  if ((g_ActiveRules != 0) && (*(code **)(g_ActiveRules + 0xc) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00425750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(g_ActiveRules + 0xc))();
    return;
  }
  return;
}

