
/* SP cheat (toggle_cheats 0x5b9268): rank 10, hull = Power_GetHullMax(level 10), "SHIP ENHANCED" */

void Cheat_ShipEnhanced(void)

{
  int iVar1;
  
  if (DAT_005b9268 != 0) {
    DAT_005b9020 = 10;
    g_SrvCurShip->rank = 10;
    iVar1 = Power_GetHullMax(&g_SrvCurShip->power,DAT_005b1f0c + 0xd0,10);
    (g_SrvCurShip->power).hull = iVar1;
    maybe_log_something(s_SHIP_ENHANCED_0053416c,0xc);
    Chatter_PlayRandom(5);
  }
  return;
}

