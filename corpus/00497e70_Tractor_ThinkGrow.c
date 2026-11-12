
/* sweep: guess */

void Tractor_ThinkGrow(int param_1)

{
  int iVar1;
  
  Tractor_Think(param_1);
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 0x40000;
  iVar1 = *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xe4);
  *(int *)(param_1 + 0xe0) = iVar1;
  if (0x2ffff < iVar1) {
    *(undefined4 *)(param_1 + 0xe4) = 0xfffff000;
    return;
  }
  if (iVar1 < -0x2ffff) {
    *(undefined4 *)(param_1 + 0xe4) = 0x1000;
  }
  return;
}

