
void FUN_0043e6f0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  iVar1 = param_1;
  iVar3 = FUN_0043e3d0(param_1,param_2);
  if (iVar3 != 0) {
    FUN_0043b990(iVar1,iVar3 + 0x80,*(undefined4 *)(iVar3 + 0x104),&param_2,&param_1);
    *(int *)(iVar3 + 0x10c) = param_3;
    *(int *)(iVar3 + 0x110) = param_4;
    *(int *)(iVar3 + 0x114) = param_2 + param_3;
    *(int *)(iVar3 + 0x118) = param_1 + param_4;
    FUN_0043e610(iVar1,iVar2,4);
  }
  return;
}

