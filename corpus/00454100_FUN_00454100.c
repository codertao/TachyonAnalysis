
undefined4 FUN_00454100(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x8c) != 0)) &&
     (pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x78), pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)(param_1,8,0);
    return uVar2;
  }
  return 0;
}

