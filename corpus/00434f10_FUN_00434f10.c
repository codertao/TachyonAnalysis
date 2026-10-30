
void FUN_00434f10(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar1 = Sped_GetDefList(param_1,param_2);
    if (iVar1 != 0) {
      iVar2 = FUN_00434ed0(*(undefined4 *)(param_1 + 0x54),iVar1);
      *(int *)(param_1 + 0x54) = iVar2;
      if (iVar2 != -1) {
        *(int *)(param_1 + 0x54) = iVar2 - DAT_005a5e2c;
      }
      uVar3 = FUN_00434ed0(*(undefined4 *)(param_1 + 0x60),iVar1);
      *(undefined4 *)(param_1 + 0x60) = uVar3;
      uVar3 = FUN_00434ed0(*(undefined4 *)(param_1 + 100),iVar1);
      *(undefined4 *)(param_1 + 100) = uVar3;
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
  }
  return;
}

