
/* sweep */

void PlayerDcb_ReinstallIf(int param_1)

{
  if (DAT_005b3340 == param_1) {
    PlayerDcb_InstallThink();
    return;
  }
  return;
}

