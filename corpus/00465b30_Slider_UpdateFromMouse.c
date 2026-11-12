
/* sweep: guess */

void Slider_UpdateFromMouse(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar3 = *(int *)(param_1 + 0x34);
    iVar4 = *(int *)(param_1 + 0x38);
    iVar2 = ((*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x1c)) * iVar3) / iVar4 +
            *(int *)(*(int *)(param_1 + 4) + 0x44) + 1 + *(int *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0x30) + iVar2;
    param_3 = param_2;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x34);
    iVar4 = *(int *)(param_1 + 0x38);
    iVar2 = ((*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) * iVar3) / iVar4 +
            *(int *)(*(int *)(param_1 + 4) + 0x48) + 1 + *(int *)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x30) + iVar2;
  }
  if (param_4 == 0) {
    DAT_0056356c = 0;
    DAT_00563570 = 0;
    if (param_3 < iVar2) {
      iVar2 = -*(int *)(param_1 + 0x3c);
    }
    else {
      if (param_3 <= iVar1) {
        DAT_0056356c = param_3;
        DAT_00563570 = *(undefined4 *)(param_1 + 0x34);
        return;
      }
      iVar2 = *(int *)(param_1 + 0x3c);
    }
  }
  else {
    if (DAT_0056356c == 0) {
      return;
    }
    if (*(int *)(param_1 + 8) == 0) {
      iVar2 = *(int *)(param_1 + 0x24);
      iVar1 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x28);
      iVar1 = *(int *)(param_1 + 0x20);
    }
    iVar2 = ((param_3 - DAT_0056356c) / ((iVar2 - iVar1) / iVar4) - iVar3) + DAT_00563570;
  }
  if (iVar2 != 0) {
    (**(code **)(param_1 + 0x2c))(iVar2);
  }
  return;
}

