
/* client replica +0x80: send 0x2003 kind 1, local impact */

void Replica_ReportHit(int param_1)

{
  NetCli_SendHitReport(*(undefined4 *)(param_1 + 0xe8),DAT_005653dc,1);
  DAT_005653fc = 5;
  Weapon_PlayImpact(DAT_005653dc,1,1,0,0);
  return;
}

