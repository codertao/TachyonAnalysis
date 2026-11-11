
/* client ship replica +0x80: send 0x2003 (kind by shield flag), local impact */

void ShipReplica_ReportHit(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if ((*(byte *)(param_1 + 0xc0) & 0x40) != 0) {
    uVar1 = 1;
  }
  NetCli_SendHitReport(*(undefined4 *)(param_1 + 0xe8),DAT_005653dc,uVar1);
  DAT_005653fc = ShieldFx_PickVariant(*(char *)(param_1 + 0xc2) == '\x02',DAT_005653e4);
  Weapon_PlayImpact(DAT_005653dc,1,uVar1,0,0);
  return;
}

