
void FUN_00435690(uint *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)param_1[1];
  uVar2 = 0;
  if (*param_1 != 0) {
    do {
      piVar1[4] = piVar1[4] + *(int *)(param_3 + 0x1a0);
      FUN_00457dc0(param_2,piVar1[2],piVar1);
      piVar1 = (int *)((int)piVar1 + *piVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_1);
  }
  return;
}

