
/* client replica +0x80: 0x2003 kind 1/2 by +0xc0&0x40 */

void Replica_ReportHitShielded(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if ((*(byte *)(param_1 + 0xc0) & 0x40) != 0) {
    uVar1 = 1;
  }
  NetCli_SendHitReport(*(undefined4 *)(param_1 + 0xe8),DAT_005653dc,uVar1);
  DAT_005653fc = 5;
  Weapon_PlayImpact(DAT_005653dc,1,uVar1,0,1);
  return;
}

