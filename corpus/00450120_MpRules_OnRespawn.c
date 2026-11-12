
/* sweep: guess */

void MpRules_OnRespawn(void)

{
  Scoreboard_SetMode(0);
  PlayerDcb_InstallHandlers(GLBL_SOME_CONTEXT);
  if (*(code **)(DAT_00590238 + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00450142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_00590238 + 0x28))();
    return;
  }
  return;
}

