
void FUN_00456140(int param_1,byte param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 & 4) != 0) {
    iVar2 = *(int *)(param_1 + 8) - param_3;
    *(int *)(param_1 + 8) = iVar2;
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    piVar1 = (int *)(param_1 + 0x10);
    *piVar1 = *piVar1 - param_3;
    if (*piVar1 < 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  return;
}

