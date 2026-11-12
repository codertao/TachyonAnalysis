
/* sweep */

void Ent_AddAsTarget(int param_1)

{
  Ent_ClearTargetRefs(param_1);
  Ent_SetEngageLimits(param_1,2,2);
  Nop(param_1,*(undefined4 *)(param_1 + 100),s_ADDED_AS_TARGET_00548ce0);
  return;
}

