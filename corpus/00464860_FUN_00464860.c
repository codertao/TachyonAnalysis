
void FUN_00464860(int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x50);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,1,param_2);
    return;
  }
  str_sprintf(param_2,s_UNKOWN_NAME_0054a2d8);
  return;
}

