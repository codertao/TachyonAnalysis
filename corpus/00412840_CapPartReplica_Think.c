
/* sweep */

void CapPartReplica_Think(int param_1)

{
  byte bVar1;
  
  Replica_Extrapolate(param_1);
  bVar1 = *(byte *)(param_1 + 0xc0) & 0x3f;
  *(byte *)(param_1 + 0xc0) = bVar1;
  *(byte *)(param_1 + 0xc0) = *(byte *)(*(int *)(param_1 + 0xd4) + 0xc0) & 0xc0 | bVar1;
  if ((*(byte *)(*(int *)(param_1 + 0xe0) + 0x34) & 0x80) != 0) {
    BasePart_CheckNearPlayer(param_1,*(int *)(param_1 + 0xe0));
  }
  return;
}

