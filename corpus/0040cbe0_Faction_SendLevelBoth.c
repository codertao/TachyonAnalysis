
/* sweep */

void Faction_SendLevelBoth(undefined4 param_1,undefined4 *param_2)

{
  Faction_SendLevel(param_1,*param_2);
  Faction_SendLevel(param_1,param_2[1]);
  return;
}

