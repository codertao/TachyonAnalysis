
/* sweep */

void Player_FinishUndock(void)

{
  Camera_SetDefaultMode();
  PlayerDcb_InstallHandlers(GLBL_SOME_CONTEXT);
  Fade_StartDefault(0,0);
  Ent_PointAhead(GLBL_SOME_CONTEXT,g_PlayerPower.speedFactor * *(float *)(DAT_005b1f0c + 0xbc));
  Input_PushBindingSet(&PTR_DAT_0053e600);
  NetCli_SendAbort();
  return;
}

