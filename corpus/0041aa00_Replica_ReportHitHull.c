
/* client replica +0x80: send 0x2003 kind 2 */

void Replica_ReportHitHull(int param_1)

{
  NetCli_SendHitReport(*(undefined4 *)(param_1 + 0xe8),DAT_005653dc,2);
  Weapon_PlayImpact(DAT_005653dc,1,2,0,0);
  return;
}

