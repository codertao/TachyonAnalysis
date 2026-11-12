
void ShipReplica_Think(int param_1)

{
  if ((g_FlightStateFlags & 4) == 0) {
    Replica_LineOfSightCheck(param_1);
  }
  TachCli_ReplicaThink(param_1);
  ShipReplica_SmokeTick(param_1);
  if (((((*(uint *)(param_1 + 0x104) ^ DAT_005b3304) & 0x1f) == 0) &&
      (*(int *)(*(int *)(param_1 + 0x8c) + 0x62c) != 0)) && (*(short *)(param_1 + 0x76) != 1)) {
    Replica_UpdateLod(param_1,*(int *)(param_1 + 0x8c) + 0x62c);
  }
  if (((*(uint *)(param_1 + 0x104) ^ DAT_005b3304) & 0xf) == 0) {
    ShipReplica_UpdateEngine(param_1);
    ShipReplica_UpdateAlpha(param_1);
  }
  return;
}

