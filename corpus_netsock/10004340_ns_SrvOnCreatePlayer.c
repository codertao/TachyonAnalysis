
void __cdecl ns_SrvOnCreatePlayer(int param_1,in_addr param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  iVar3 = param_3;
  piVar1 = FUN_10003fe0((int)param_2.S_un,param_3);
  uVar4 = (undefined2)iVar3;
  if (piVar1 == (int *)0x0) {
    FUN_10004190(param_2.S_un,uVar4,1,0xffffffff);
    return;
  }
  iVar2 = FUN_100041d0((int)param_2.S_un,iVar3);
  if (iVar2 != 0) {
    FUN_10004190(param_2.S_un,uVar4,0,*(undefined4 *)(iVar2 + 0xa0));
    return;
  }
  *(int *)(param_1 + 0x88) = param_1 + 0xa0;
  iVar2 = FUN_10001530(&param_3,(undefined4 *)(param_1 + 8),0,1,(int)piVar1);
  if (iVar2 != 0) {
    FUN_10004190(param_2.S_un,uVar4,1,0xffffffff);
    return;
  }
  DAT_100198bc = DAT_100198bc + 1;
  FUN_10004190(param_2.S_un,uVar4,0,param_3);
  FUN_10004250(param_3);
  iVar3 = FUN_100041d0((int)param_2.S_un,iVar3);
  if (DAT_10019c68 != 0) {
    FUN_10004280(iVar3,param_2);
  }
  FUN_10002b80(iVar3,2);
  return;
}

