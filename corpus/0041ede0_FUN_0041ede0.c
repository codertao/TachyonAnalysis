
void FUN_0041ede0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(param_2 + 0x2c);
  iVar2 = *(int *)(param_2 + 0x28);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      uVar4 = param_4;
      uVar5 = param_5;
      uVar6 = param_6;
      if (iVar3 < iVar1 + -1) {
        uVar4 = 0xffffffff;
        uVar5 = 0xffffffff;
        uVar6 = 0;
      }
      FUN_0041ed20(iVar2,param_3,uVar4,uVar5,uVar6);
      iVar1 = *(int *)(param_2 + 0x2c);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < iVar1);
  }
  return;
}

