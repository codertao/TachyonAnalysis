
/* sweep: guess */

void Proj_ThinkSpinGrow(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 0x400;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 0x400;
  iVar1 = *(int *)(param_1 + 0x2c) + -8;
  iVar2 = *(int *)(param_1 + 0xd4) + -6;
  *(int *)(param_1 + 0x2c) = iVar1;
  *(int *)(param_1 + 0xd4) = iVar2;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  if (*(int *)(param_1 + 0xd4) == 0) {
    Quad_Unlink(param_1);
  }
  return;
}

