
/* sweep */

void CapShipReplica_Think(int param_1)

{
  Replica_Extrapolate(param_1);
  MultiPart_UpdateTransforms(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0xe0) + 0x34) & 0x80) != 0) {
    BasePart_CheckNearPlayer(param_1,*(int *)(param_1 + 0xe0));
  }
  return;
}

