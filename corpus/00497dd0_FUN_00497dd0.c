
void FUN_00497dd0(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  iVar1 = *(int *)(param_1 + 0xf4);
  iVar2 = *(int *)(param_1 + 0xd4);
  if (iVar1 == 0) {
    FUN_00497d00(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar1 + 0xac);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(iVar1 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar1 + 0xb4);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 0xa0);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar1 + 0xa4);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar1 + 0xa8);
  }
  pcVar3 = *(code **)(iVar2 + 0xb0);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1,iVar2);
  }
  return;
}

