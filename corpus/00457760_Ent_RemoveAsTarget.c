
/* sweep */

void Ent_RemoveAsTarget(int param_1)

{
  Ent_RemoveFromTargets(param_1);
  Nop(param_1,*(undefined4 *)(param_1 + 100),s_REMOVED_AS_TARGET_00548cf0);
  return;
}

