
void FUN_004954c0(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4);
  iVar3 = *(int *)(param_1 + 0xd4) + -1;
  iVar1 = *(int *)(param_1 + 0xdc);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0xd4) = iVar3;
  if (iVar3 == 0) {
    FUN_0041b8c0(param_1);
  }
  pcVar2 = *(code **)(iVar1 + 0xb0);
  if ((pcVar2 != (code *)0x0) && (*(int *)(param_1 + 0xd8) == 1)) {
    (*pcVar2)(param_1,iVar1);
  }
  return;
}

