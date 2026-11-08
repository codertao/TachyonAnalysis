
/* rules +0x00 */

void Rules_Init(void)

{
  if ((g_ActiveRules != (undefined4 *)0x0) && ((code *)*g_ActiveRules != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0042576f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*g_ActiveRules)();
    return;
  }
  return;
}

