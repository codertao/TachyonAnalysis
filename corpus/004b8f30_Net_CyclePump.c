
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* per-frame network cycle: frame counter 0x6af5bc++, Net_ReceiveDispatch, hook 0x4b8a60, periodic
   0x4b8ef0 */

void Net_CyclePump(void)

{
  _DAT_006af5bc = _DAT_006af5bc + 1;
  Net_ReceiveDispatch();
  FUN_004b8a60();
  if ((_DAT_006af614 & DAT_006af640) == 0) {
    NetCli_BuildAndSend();
  }
  DAT_006af640 = DAT_006af640 + 1;
  return;
}

