
void FUN_00493910(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x8c) != 0)) &&
     (pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x7c), pcVar1 != (code *)0x0)) {
    (*pcVar1)(param_1,param_2,0);
  }
  return;
}

