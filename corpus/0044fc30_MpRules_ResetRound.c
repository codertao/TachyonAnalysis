
/* sweep: MPRESET.TXT */

void MpRules_ResetRound(void)

{
  Srv_BumpSession();
  MpEnt_ClearAll();
  DcbPools_Reset();
  Mem_FreeTag(0xd500);
  MpSectors_Reset();
  MpEnt_ResetAll(1);
  Mem_DumpAllPoolsToFile(s_MPRESET_TXT_00548540);
  return;
}

