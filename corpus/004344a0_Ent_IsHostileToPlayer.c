
/* sweep: team relation table & player mask */

uint Ent_IsHostileToPlayer(int param_1)

{
  return *(uint *)((uint)*(byte *)(param_1 + 0xc2) * 0x10 + DAT_0058f2e8) & DAT_005a5df0;
}

