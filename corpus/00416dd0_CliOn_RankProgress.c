
/* S->C 0x1122 handler */

void CliOn_RankProgress(undefined4 *param_1)

{
  DAT_005b9018 = *param_1;
  DAT_005b901c = param_1[1];
  DAT_005b9020 = param_1[2];
  DAT_005b9024 = param_1[3];
  if (*(code **)(g_ActiveRules + 0x7c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00416e03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(g_ActiveRules + 0x7c))();
    return;
  }
  return;
}

