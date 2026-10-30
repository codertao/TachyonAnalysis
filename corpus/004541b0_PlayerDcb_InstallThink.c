
/* install g_PlayerCtrlDcb+0x68 = PlayerDcb_Think */

void PlayerDcb_InstallThink(void)

{
  DAT_005b3344 = 0;
  *(code **)(DAT_005b3300 + 0x68) = PlayerDcb_Think;
  FUN_004a0a90();
  DAT_005b3340 = 0;
  return;
}

