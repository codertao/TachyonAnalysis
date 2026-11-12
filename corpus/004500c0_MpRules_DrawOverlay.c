
/* sweep */

void MpRules_DrawOverlay(void)

{
  if (DAT_00590d50 == 1) {
    Scoreboard_DrawAll();
  }
  else if (DAT_00590d50 == 2) {
    Scoreboard_DrawRestart();
  }
  if (*(code **)(DAT_00590238 + 0x30) != (code *)0x0) {
    (**(code **)(DAT_00590238 + 0x30))();
  }
  PlayerList_Draw();
  VonUi_DrawTalker();
  return;
}

