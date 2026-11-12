
/* sweep */

void Viewport_Compute(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_5 + 0x14) = param_2 * 0x80;
  *(int *)(param_5 + 0x18) = param_3 * 0x80;
  *(int *)(param_5 + 0x1c) = param_4 * 0x80;
  *(int *)(param_5 + 0x10) = param_1 * 0x80;
  *(int *)(param_5 + 0x34) = param_3 * 0x80 + param_1 * 0x80 >> 1;
  *(int *)(param_5 + 0x38) = param_4 * 0x80 + param_2 * 0x80 >> 1;
  iVar2 = param_2 + param_4 >> 1;
  iVar1 = param_1 + param_3 >> 1;
  *(int *)(param_5 + 0x20) = param_1;
  *(int *)(param_5 + 0x24) = param_2;
  *(int *)(param_5 + 0x28) = param_3;
  *(int *)(param_5 + 0x2c) = param_4;
  *(int *)(param_5 + 0x3c) = iVar1;
  *(int *)(param_5 + 0x40) = iVar2;
  Rend_SetViewport(param_1,param_2,param_3,param_4,iVar1,iVar2,0x32,1);
  return;
}

