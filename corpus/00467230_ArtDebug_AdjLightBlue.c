
void ArtDebug_AdjLightBlue(int param_1)

{
  param_1 = *(int *)(DAT_005b9084 + 0x140) + param_1;
  *(int *)(DAT_005b9084 + 0x140) = param_1;
  if (param_1 < 0) {
    *(undefined4 *)(DAT_005b9084 + 0x140) = 0;
  }
  else if (0x200 < *(int *)(DAT_005b9084 + 0x140)) {
    *(undefined4 *)(DAT_005b9084 + 0x140) = 0x200;
  }
  FUN_004af220(*(undefined4 *)(DAT_005b9084 + 0x138),*(undefined4 *)(DAT_005b9084 + 0x13c),
               *(undefined4 *)(DAT_005b9084 + 0x140));
  return;
}

