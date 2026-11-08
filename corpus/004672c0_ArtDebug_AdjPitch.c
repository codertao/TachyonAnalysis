
void ArtDebug_AdjPitch(int param_1)

{
  *(int *)(DAT_005b9084 + 0x20) = *(int *)(DAT_005b9084 + 0x20) + param_1;
  *(uint *)(DAT_005b9084 + 0x20) = *(uint *)(DAT_005b9084 + 0x20) & 0x1ffffff;
  return;
}

