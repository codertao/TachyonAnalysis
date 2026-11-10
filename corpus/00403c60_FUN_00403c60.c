
void FUN_00403c60(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
    Ai_ReturnToDefault(param_1);
    for (iVar1 = *(int *)(param_1 + 0xfc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xfc)) {
      *(int *)(iVar1 + 0xf8) = param_1;
    }
  }
  return;
}

