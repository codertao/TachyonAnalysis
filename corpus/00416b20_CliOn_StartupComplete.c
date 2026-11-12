
/* S->C 0x1111 handler */

void CliOn_StartupComplete(void)

{
  if (*(code **)(g_ActiveRules + 0x8c) != (code *)0x0) {
    (**(code **)(g_ActiveRules + 0x8c))();
    DAT_005b9058 = 1;
    return;
  }
  NetCli_SendSceneLoaded();
  load_sbf_and_bin(s_ttfmusic_005342d8,s_ttf_music_005342e4);
  DAT_005b9058 = 1;
  return;
}

