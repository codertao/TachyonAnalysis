
void FUN_00456ad0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x8c) + 0xd0;
  *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + param_2;
  iVar1 = param_1 + 0x11c;
  *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + param_2;
  iVar2 = FUN_00455e40(iVar1,iVar4);
  if (iVar2 < *(int *)(param_1 + 0x124)) {
    uVar3 = FUN_00455e40(iVar1,iVar4);
    *(undefined4 *)(param_1 + 0x124) = uVar3;
  }
  iVar2 = FUN_00455e40(iVar1,iVar4);
  if (iVar2 < *(int *)(param_1 + 300)) {
    uVar3 = FUN_00455e40(iVar1,iVar4);
    *(undefined4 *)(param_1 + 300) = uVar3;
  }
  return;
}

