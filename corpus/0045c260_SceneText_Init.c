
/* sweep */

void SceneText_Init(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_2;
  iVar1 = *(int *)(iVar3 + 0x28);
  param_2[1] = *(int *)(iVar3 + 4);
  param_2[2] = *(int *)(iVar3 + 8);
  param_2[3] = *(int *)(iVar3 + 0xc);
  param_2[4] = *(int *)(iVar3 + 0x10);
  param_2[10] = -param_2[9];
  param_2[0xd] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  iVar2 = *(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 4);
  if (iVar2 != 0) {
    param_2[5] = iVar2 / iVar1;
  }
  iVar2 = *(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 8);
  if (iVar2 != 0) {
    param_2[6] = iVar2 / iVar1;
  }
  iVar2 = *(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0xc);
  if (iVar2 != 0) {
    param_2[7] = iVar2 / iVar1;
  }
  iVar3 = *(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x10);
  if (iVar3 != 0) {
    param_2[8] = iVar3 / iVar1;
  }
  return;
}

