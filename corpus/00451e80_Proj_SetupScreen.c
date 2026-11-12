
/* sweep */

void Proj_SetupScreen(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  *(int *)(param_5 + 0x50) = param_1 * param_3;
  *(int *)(param_5 + 0x48) = param_3 * 8;
  *(int *)(param_5 + 8) = param_1;
  *(int *)(param_5 + 0x4c) = param_3;
  *(int *)(param_5 + 4) = param_1 * param_2 * param_3;
  *(int *)(param_5 + 0x44) = (param_1 << 0x10) / 0x280;
  *(int *)(param_5 + 0xc) = param_2;
  *(undefined4 *)(param_5 + 0x30) = param_4;
  return;
}

