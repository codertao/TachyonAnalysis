
int FUN_00431ce0(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  uVar4 = param_3;
  uVar3 = param_2;
  piVar2 = param_1;
  bVar6 = param_1 == (int *)0x0;
  param_1 = (int *)*param_1;
  if (bVar6) {
    return 0;
  }
  while( true ) {
    if (param_1 == (int *)0x0) {
      FUN_0048e3d0(&param_1,0xc,4,s_polyfont_wrapper_0053f210,0xcccc);
      FUN_0048e3d0(param_1,0x38,4,s_polyfont_0053f204,0xcccc);
      iVar1 = *param_1;
      *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + 1;
      if (*piVar2 == 0) {
        *piVar2 = (int)param_1;
      }
      else {
        param_1[2] = *piVar2;
        *(int **)(*piVar2 + 4) = param_1;
        *piVar2 = (int)param_1;
      }
      FUN_004ade60(uVar3,iVar1,uVar4,0xcccc);
      return iVar1;
    }
    iVar1 = *param_1;
    iVar5 = FUN_004c67c0(iVar1 + 0x10,uVar3);
    if ((iVar5 == 0) &&
       ((((*(uint *)(iVar1 + 0x30) & 0x100000) != 0 && ((uVar4 & 0x100000) != 0)) ||
        (((*(uint *)(iVar1 + 0x30) & 0x20000) != 0 && ((uVar4 & 0x20000) != 0)))))) break;
    param_1 = (int *)param_1[2];
  }
  *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + 1;
  return iVar1;
}

