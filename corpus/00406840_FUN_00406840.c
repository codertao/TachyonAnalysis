
void FUN_00406840(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 0x28) = (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x14)) / iVar1;
  *(int *)(param_1 + 0x2c) = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x18)) / iVar1;
  *(int *)(param_1 + 0x30) = (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x1c)) / iVar1;
  *(int *)(param_1 + 0x34) = (*(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x20)) / iVar1;
  *(int *)(param_1 + 0x38) = (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x24)) / iVar1;
  *(int *)(param_1 + 0x6c) = (*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x58)) / iVar1;
  *(int *)(param_1 + 0x70) = (*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x5c)) / iVar1;
  *(int *)(param_1 + 0x74) = (*(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x60)) / iVar1;
  return;
}

