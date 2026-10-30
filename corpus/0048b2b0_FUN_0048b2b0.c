
int FUN_0048b2b0(int param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  for (iVar1 = *(int *)(*(int *)(param_1 + 100) + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x94)) {
    if ((((iVar1 != param_5) && (iVar1 != param_1)) &&
        ((*(uint *)((uint)*(byte *)(iVar1 + 0xc2) * 0x10 + DAT_0058f2e8) & param_2) != 0)) &&
       (((*(uint *)(iVar1 + 0xd0) & param_6) != 0 &&
        (uVar2 = FUN_0048e440(param_1 + 0x34,iVar1 + 0x34), uVar2 < param_4)))) {
      iVar3 = iVar1;
      param_4 = uVar2;
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = param_4;
  }
  return iVar3;
}

