
/* refine: startup kind 1 +0x32 = game-mode id (*mode table: DM 1, BW 0) */

undefined4 MpRules_GetGameTypeId(void)

{
  return *DAT_00590238;
}

