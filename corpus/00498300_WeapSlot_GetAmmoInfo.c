
/* sweep: guess */

void WeapSlot_GetAmmoInfo(int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    *param_2 = 0;
    *param_3 = 1;
    *param_4 = 0;
    return;
  }
  if (param_1[2] == 0) {
    *param_2 = 0;
    *param_3 = 1;
    *param_4 = 0;
    return;
  }
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x50) != 0) {
    *param_2 = param_1[0xb];
    *param_3 = *(int *)(iVar1 + 0x50);
    *param_4 = 1;
    return;
  }
  iVar2 = *(int *)param_1[7] - param_1[8];
  if (param_1[4] != 0) {
    if (param_1[6] < iVar2) {
      iVar2 = param_1[6];
    }
    *param_2 = iVar2;
    *param_3 = param_1[6];
    *param_4 = 0;
    return;
  }
  if (*(int *)(iVar1 + 0x40) < iVar2) {
    iVar2 = *(int *)(iVar1 + 0x40);
  }
  *param_2 = iVar2;
  *param_3 = *(int *)(iVar1 + 0x40);
  *param_4 = 0;
  return;
}

