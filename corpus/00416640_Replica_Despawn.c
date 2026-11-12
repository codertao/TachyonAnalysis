
/* sweep */

void Replica_Despawn(int param_1)

{
  PlayerDcb_ReinstallIf(param_1);
  Ent_UnlinkFromMaps(param_1,*(int *)(param_1 + 100) + 0x14);
  List_RemoveW(param_1,&DAT_005b3280);
  Replica_Destroy(param_1,1);
  return;
}

