
void FUN_004257a0(void)

{
  if ((g_ActiveRules != 0) && (*(code **)(g_ActiveRules + 0x14) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004257b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(g_ActiveRules + 0x14))();
    return;
  }
  return;
}

