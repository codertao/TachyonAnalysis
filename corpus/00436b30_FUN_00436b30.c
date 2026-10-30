
void FUN_00436b30(int param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x34);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,param_2,param_3);
  }
  return;
}

