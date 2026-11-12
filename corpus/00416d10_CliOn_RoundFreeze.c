
/* S->C 0x1119 handler */

void CliOn_RoundFreeze(void)

{
  Audio_StopAllSamples();
  Scene_AbortOnFreeze();
  Cli_ResetWorld();
  DAT_005b905c = 1;
  Sim_SetFrozen(&LAB_004585a0);
  *(undefined4 *)(GLBL_SOME_CONTEXT + 0x68) = 0;
  *(undefined4 *)(GLBL_SOME_CONTEXT + 0x6c) = 0;
  DAT_005b9054 = 1;
  if (*(code **)(g_ActiveRules + 0x48) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00416d5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(g_ActiveRules + 0x48))();
    return;
  }
  return;
}

