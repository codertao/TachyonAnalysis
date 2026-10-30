
int FUN_0048b240(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  uVar4 = 0x40000000;
  if (param_1 != 0) {
    for (iVar1 = *(int *)(*(int *)(param_1 + 100) + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x94))
    {
      if (((*(byte *)(iVar1 + 0xc2) == param_2) &&
          (uVar2 = FUN_0048e440(param_1 + 0x34,iVar1 + 0x34), uVar2 < uVar4)) && (*param_3 < uVar2))
      {
        iVar3 = iVar1;
        uVar4 = uVar2;
      }
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar4;
    }
    return iVar3;
  }
  return 0;
}

