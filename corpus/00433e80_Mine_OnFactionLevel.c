
/* armed when level >= placement +0x3a (BaseWars) */

void Mine_OnFactionLevel(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0xd8) != 0) {
    if (*(byte *)(*(int *)(param_1 + 0xd8) + 0x3a) <= param_2) {
      Mine_SetArmed(param_1,1);
      return;
    }
    Mine_SetArmed(param_1,0);
  }
  return;
}

