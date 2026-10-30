
void FUN_0048b050(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0048b030(param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 100) + 8);
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(int *)(*(int *)(param_1 + 100) + 8) = param_1;
    if (*(int *)(param_1 + 0x94) != 0) {
      *(int *)(*(int *)(param_1 + 0x94) + 0x98) = param_1;
    }
  }
  return;
}

