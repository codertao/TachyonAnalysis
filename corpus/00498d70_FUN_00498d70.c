
undefined4 FUN_00498d70(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x44);
  if (pcVar1 != (code *)0x0) {
    uVar2 = (*pcVar1)(param_1,*(int *)(param_1 + 0x8c),0);
    return uVar2;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x30);
}

