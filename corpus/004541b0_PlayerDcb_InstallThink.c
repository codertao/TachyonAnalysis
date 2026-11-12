
/* install g_PlayerCtrlDcb+0x68 = PlayerDcb_Think */

void PlayerDcb_InstallThink(void)

{
  DAT_005b3344 = 0;
  *(code **)(GLBL_SOME_CONTEXT + 0x68) = PlayerDcb_Think;
  FF_StopSpring();
  DAT_005b3340 = 0;
  return;
}

