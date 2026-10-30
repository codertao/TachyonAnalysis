
void FUN_00407060(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xd0);
  *(int *)(param_1 + 0x68) = piVar1[0xe];
  *(int *)(param_1 + 0x5c) = piVar1[0xf];
  *(int *)(param_1 + 0x1c) = piVar1[0xc];
  *(int *)(param_1 + 0x2c) = piVar1[0xd] >> 0x10;
  if (*piVar1 != 0) {
    FUN_004107c0(0,0);
    FUN_00410310();
    FUN_0041c3e0(1);
  }
  return;
}

