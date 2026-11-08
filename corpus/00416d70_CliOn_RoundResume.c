
/* S->C 0x1120 handler */

void CliOn_RoundResume(void)

{
  DAT_005b9054 = 0;
  DAT_005b905c = 0;
  if (*(code **)(g_ActiveRules + 0x4c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00416d8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(g_ActiveRules + 0x4c))();
    return;
  }
  return;
}

