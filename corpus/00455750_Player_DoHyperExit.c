
/* sweep: guess */

void Player_DoHyperExit(void)

{
  if (*(code **)(g_ActiveRules + 0xa0) != (code *)0x0) {
    (**(code **)(g_ActiveRules + 0xa0))();
  }
  DAT_005b39ec = 1;
  Snd_Play2D(1,5,4,0xff);
  Sim_SetFrozen(&LAB_004585c0);
  Ent_PointAhead(GLBL_SOME_CONTEXT,DAT_005b1ecc);
  *(undefined1 **)(GLBL_SOME_CONTEXT + 0x68) = &LAB_00455740;
  Hyper_Enter();
  NetCli_SendState2();
  return;
}

