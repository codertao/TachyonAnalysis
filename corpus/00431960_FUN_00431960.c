
void FUN_00431960(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (piVar1 = (int *)(param_1[2] + 8 + param_1[1] * 0x28), *piVar1 != 0)) {
    iVar2 = str_cmp(piVar1 + 1,*param_1 + 0x70);
    if (iVar2 == 0) {
      ModelPool_FindByName(*param_1 + 0x70,param_1[2]);
    }
    iVar2 = FUN_004b1840(*param_1);
    if (iVar2 == 0) {
      FUN_004317b0(param_1);
    }
  }
  return;
}

