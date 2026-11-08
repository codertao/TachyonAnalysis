
/* client: send 0x2027 for this part, local impact */

void CapPartReplica_ReportHit(int param_1)

{
  NetCli_SendPartHitReport
            (*(undefined4 *)(*(int *)(param_1 + 0xdc) + 0xe8),
             *(undefined4 *)(*(int *)(param_1 + 0xd4) + 0x44),DAT_005653dc,2);
  Weapon_PlayImpact(DAT_005653dc,1,2,0,0);
  return;
}

