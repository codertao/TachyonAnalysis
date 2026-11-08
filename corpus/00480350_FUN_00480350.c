
void FUN_00480350(int *param_1)

{
  int iVar1;
  
  for (; (param_1 != (int *)0x0 && (*param_1 != 0)); param_1 = param_1 + 100) {
    iVar1 = param_1[0x12];
    while (iVar1 != 0) {
      iVar1 = *(int *)(param_1[0x12] + 0x68);
      OurFreeMem(param_1[0x12]);
      param_1[0x12] = iVar1;
    }
    param_1[0x12] = 0;
  }
  return;
}

