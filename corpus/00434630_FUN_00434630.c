
void FUN_00434630(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 != -1) {
    iVar2 = *(int *)(param_1 + 0xf8) + param_2 * 0x20;
    iVar1 = FUN_004345b0(iVar2);
    if (iVar1 != 0) {
      puVar3 = (undefined4 *)(iVar1 + 8);
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_3 = *puVar3;
        puVar3 = puVar3 + 1;
        param_3 = param_3 + 1;
      }
      return;
    }
    iVar1 = FUN_00434550(iVar2);
    puVar3 = (undefined4 *)(iVar1 + 8);
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

