
/* sweep */

uint Team_IsHostileToPlayer(int param_1)

{
  return *(uint *)(param_1 * 0x10 + DAT_0058f2e8) & DAT_005a5df0;
}

