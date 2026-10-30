
void FUN_00408ef0(int param_1,int param_2,int param_3)

{
  FUN_0048e720(param_2 + 0x10,DAT_005b9810 + 0x4c,param_1 + 0x4c);
  *(int *)(param_1 + 0x34) = *(int *)(param_2 + 0x70) + *(int *)(param_3 + 0x34);
  *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x74) + *(int *)(param_3 + 0x38);
  *(int *)(param_1 + 0x3c) = *(int *)(param_2 + 0x78) + *(int *)(param_3 + 0x3c);
  return;
}

