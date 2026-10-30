
void FUN_0040d6e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 200) + 100);
  iVar2 = *(int *)(iVar1 + 0x3c);
  Nav_SetDestination(*(undefined4 *)(iVar2 + 0x3c),*(undefined4 *)(iVar2 + 0x40),iVar1,param_1);
  return;
}

