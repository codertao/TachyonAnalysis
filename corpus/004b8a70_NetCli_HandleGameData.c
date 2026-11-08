
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MSG_GAMEDATA(2): advance client time, callback 0x6af598 */

void NetCli_HandleGameData(int param_1)

{
  if (DAT_006af624 == DAT_006af620) {
    if (DAT_006af5c8 != 0) {
      DAT_006af5c8 = 0;
      _DAT_006af5bc = 0;
      DAT_006af5c0 = 0;
    }
    DAT_006af5c0 = DAT_006af5c0 + DAT_006af60c;
    if (DAT_006af598 != (code *)0x0) {
      (*DAT_006af598)(param_1 + 4,DAT_006af5c0 - _DAT_006af5bc);
    }
  }
  return;
}

