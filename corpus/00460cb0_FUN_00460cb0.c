
void FUN_00460cb0(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = *(int *)(param_1 + 0x110);
  if ((iVar1 != 0) && (pcVar2 = *(code **)(*(int *)(iVar1 + 0x8c) + 0x34), pcVar2 != (code *)0x0)) {
    (*pcVar2)(iVar1,0x10,param_1);
  }
  return;
}

