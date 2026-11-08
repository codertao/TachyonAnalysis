
/* needs cheats enabled; GOD MODE ENABLED/DISABLED */

void Cheat_ToggleGodMode(void)

{
  if (DAT_005b9268 != 0) {
    GLBL_cheat_related1 = (uint)(GLBL_cheat_related1 == 0);
    if (GLBL_cheat_related1 != 0) {
      maybe_log_something(s_GOD_MODE_ENABLED_005341f0,0xc);
      Chatter_PlayRandom(5);
      return;
    }
    maybe_log_something(s_GOD_MODE_DISABLED_005341dc,0xc);
  }
  return;
}

