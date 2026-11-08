
/* S->C 0x1006 handler */

void CliOn_YouDied(void)

{
  if (DAT_005b905c == 0) {
    (**(code **)(g_ActiveRules + 0x40))(GLBL_SOME_CONTEXT);
  }
  return;
}

