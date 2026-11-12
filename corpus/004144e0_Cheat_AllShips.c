
/* sweep */

void Cheat_AllShips(void)

{
  if ((DAT_005b9268 != 0) &&
     (GLBL_cheat_related_all_ships_maybe = (uint)(GLBL_cheat_related_all_ships_maybe == 0),
     GLBL_cheat_related_all_ships_maybe != 0)) {
    maybe_log_something(s_ALL_SHIPS_NOW_AVAILABLE_00534154,0xc);
    Chatter_PlayRandom(5);
  }
  return;
}

