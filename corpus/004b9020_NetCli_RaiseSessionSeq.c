
/* refine: 0x6af620 = max(current, n) */

void NetCli_RaiseSessionSeq(uint param_1)

{
  if (DAT_006af620 < param_1) {
    DAT_006af620 = param_1;
  }
  return;
}

