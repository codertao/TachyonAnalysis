
/* sweep: silent removal (no explosion) */

void Sped_Despawn(int param_1)

{
  int iVar1;
  
  Sped_DespawnFormationFixup(param_1,*(undefined4 *)(param_1 + 0xd8));
  iVar1 = Sped_GetActorRecord(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 100));
  if (iVar1 != 0) {
    Dialog_UnbindActor(iVar1);
  }
  Sped_Unregister(param_1,*(undefined4 *)(param_1 + 0xd8));
  return;
}

