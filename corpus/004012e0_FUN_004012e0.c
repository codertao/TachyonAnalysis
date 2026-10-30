
undefined4 FUN_004012e0(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = *(code **)(*(int *)(param_2 + 0x8c) + 0x68);
  if (pcVar1 != (code *)0x0) {
    iVar2 = (*pcVar1)(param_2,param_1,*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x564),
                      *(int *)(param_1 + 0x8c) + 0x56c);
    if (iVar2 == 0) {
      return 2;
    }
  }
  if (*(int *)(param_1 + 0x100) == 0) {
    return 1;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x100) + 0x18);
  if (iVar2 == 0) {
    return 1;
  }
  uVar3 = FUN_00401270(param_1,iVar2,param_2);
  return uVar3;
}

