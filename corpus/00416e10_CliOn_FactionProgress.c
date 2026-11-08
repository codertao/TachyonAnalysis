
/* S->C 0x1123 handler */

void CliOn_FactionProgress(undefined4 *param_1)

{
  DAT_005b9028 = *param_1;
  DAT_005b902c = param_1[1];
  DAT_005b9030 = param_1[2];
  if (*(code **)(g_ActiveRules + 0x7c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00416e3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(g_ActiveRules + 0x7c))();
    return;
  }
  return;
}

