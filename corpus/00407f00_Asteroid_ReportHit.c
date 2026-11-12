
/* client asteroid +0x80: send 0x2003 */

void Asteroid_ReportHit(int param_1)

{
  Asteroid_HitFx();
  NetCli_SendHitReport(*(undefined4 *)(param_1 + 0xe8),DAT_005653dc,0);
  return;
}

