
/* sweep */

void MineReplica_Think(int param_1)

{
  if (*(int *)(param_1 + 200) != 0) {
    Ent_UpdateSound3D(param_1);
  }
  if ((((*(uint *)(param_1 + 0x104) ^ DAT_005b3304) & 0x1f) == 0) &&
     (*(int *)(*(int *)(param_1 + 0x8c) + 0x1c8) != 0)) {
    Replica_UpdateLod(param_1,*(int *)(param_1 + 0x8c) + 0x1c8);
  }
  return;
}

