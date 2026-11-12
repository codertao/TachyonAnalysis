
/* sweep: g_ActiveRules +0x9c */

void Act_RulesHotkey(void)

{
  if (((DAT_005a6730 != 0) || (DAT_005b2b14 != 0)) &&
     (*(code **)(g_ActiveRules + 0x9c) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00430561. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(g_ActiveRules + 0x9c))();
    return;
  }
  return;
}

