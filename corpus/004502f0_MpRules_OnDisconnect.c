
/* sweep: guess */

void MpRules_OnDisconnect(void)

{
  DAT_005b3394 = 1;
  Scene_SetFade(0xff0000,0,0,0);
  Hyper_SetMode(1);
  Player_DoHyperExit();
  return;
}

