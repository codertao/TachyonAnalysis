
void FUN_00455b40(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (((*(uint *)(param_1 + 0x10c) ^ DAT_005897e4) & 7) == 0) {
    if ((*(int *)(param_2 + 0x8c) != 0) &&
       (pcVar1 = *(code **)(*(int *)(param_2 + 0x8c) + 0x34), pcVar1 != (code *)0x0)) {
      iVar2 = (*pcVar1)(param_2,4,0);
      if (iVar2 == 0) {
        FUN_00455aa0(param_1,param_2);
      }
    }
  }
  return;
}

