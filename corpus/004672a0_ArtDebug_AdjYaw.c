
void ArtDebug_AdjYaw(int param_1)

{
  *(int *)(DAT_005b9084 + 0x1c) = *(int *)(DAT_005b9084 + 0x1c) + param_1;
  *(uint *)(DAT_005b9084 + 0x1c) = *(uint *)(DAT_005b9084 + 0x1c) & 0x1ffffff;
  return;
}

