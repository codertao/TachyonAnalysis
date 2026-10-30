
void FUN_0041b790(int param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_004b7870(param_1);
  if (iVar1 != 0) {
    if (*(uint **)(param_1 + 0x24) != (uint *)0x0) {
      *(uint *)(iVar1 + 0x78) = **(uint **)(param_1 + 0x24) | 1;
      **(int **)(param_1 + 0x24) = **(int **)(param_1 + 0x24) + 2;
    }
    *(undefined2 *)(iVar1 + 0x76) = param_2;
    *(undefined4 *)(iVar1 + 100) = param_3;
  }
  return;
}

