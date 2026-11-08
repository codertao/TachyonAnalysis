
void ShipReplica_Think(int param_1)

{
  if ((g_FlightStateFlags & 4) == 0) {
    FUN_00414e60(param_1);
  }
  TachCli_ReplicaThink(param_1);
  FUN_00463400(param_1);
  if (((((*(uint *)(param_1 + 0x104) ^ DAT_005b3304) & 0x1f) == 0) &&
      (*(int *)(*(int *)(param_1 + 0x8c) + 0x62c) != 0)) && (*(short *)(param_1 + 0x76) != 1)) {
    FUN_00462d00(param_1,*(int *)(param_1 + 0x8c) + 0x62c);
  }
  if (((*(uint *)(param_1 + 0x104) ^ DAT_005b3304) & 0xf) == 0) {
    FUN_00463140(param_1);
    FUN_004630e0(param_1);
  }
  return;
}

