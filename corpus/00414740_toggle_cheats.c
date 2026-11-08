
void toggle_cheats(void)

{
  DAT_005b9268 = (uint)(DAT_005b9268 == 0);
  if (DAT_005b9268 != 0) {
    maybe_log_something(s_CHEATS_ENABLED_00534214,0xc);
    Chatter_PlayRandom(5);
    return;
  }
  clear_cheats();
  maybe_log_something(s_CHEATS_DISABLED_00534204,0xc);
  return;
}

