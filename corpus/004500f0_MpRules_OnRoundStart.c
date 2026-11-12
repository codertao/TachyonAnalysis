
/* sweep: guess */

void MpRules_OnRoundStart(void)

{
  Player_StartDeathCam();
  PlayerList_SetVisible(0,0);
  Scoreboard_SetMode(2);
  if (*(code **)(DAT_00590238 + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00450114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_00590238 + 0x24))();
    return;
  }
  return;
}

