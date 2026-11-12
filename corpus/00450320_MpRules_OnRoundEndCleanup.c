
/* sweep: guess */

void MpRules_OnRoundEndCleanup(void)

{
  Audio_SetMasterVolume(0xff);
  Fade_SetHold(0);
  DAT_005b332c = 1;
  Camera_SetDefaultMode();
  Fade_StartDefault(0,0);
  Ent_PointAhead(GLBL_SOME_CONTEXT,g_PlayerPower.speedFactor * *(float *)(DAT_005b1f0c + 0xbc));
  Input_PushBindingSet(&PTR_DAT_0053e600);
  return;
}

