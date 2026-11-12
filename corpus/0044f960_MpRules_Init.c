
/* sweep: desnames.cfg */

void MpRules_Init(void)

{
  clr_bytes(&DAT_005a5520,0x910);
  clr_bytes(&DAT_00590200,0xc04);
  Sped_LoadNameRegistry(s_desnames_cfg_0053f928,0xd100);
  Counters_Reset();
  return;
}

