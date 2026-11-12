
/* sweep */

void Cheat_RefillAmmo(void)

{
  if (DAT_005b9268 != 0) {
    Ship_CopyWeaponLoadout(g_SrvCurShip);
    Player_FindSpawnSlot();
    maybe_log_something(s_AMMO_REPLENISHED_005341c8,0xc);
    Chatter_PlayRandom(5);
  }
  return;
}

