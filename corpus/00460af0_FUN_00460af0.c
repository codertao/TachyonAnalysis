
void FUN_00460af0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_0045d680(param_1,param_3);
  if ((iVar2 != 0) && (pcVar1 = *(code **)(*(int *)(iVar2 + 0x8c) + 0x34), pcVar1 != (code *)0x0)) {
    (*pcVar1)(iVar2,0x11,param_2);
  }
  return;
}

