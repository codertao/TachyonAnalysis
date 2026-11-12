
/* sweep */

void Ui_RefreshOverlapping(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = *(int *)(param_1 + 0xc);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    do {
      if ((*(byte *)(iVar3 + 0xf0) & 2) != 0) {
        local_10 = *(int *)(iVar3 + 0x44);
        local_c = *(int *)(iVar3 + 0x48);
        local_8 = *(int *)(iVar3 + 0x4c) + local_10;
        local_4 = *(int *)(iVar3 + 0x50) + local_c;
        iVar1 = Rect_Overlaps(param_2,&local_10);
        if (iVar1 != 0) {
          Ui_RefreshWindow(param_1,iVar3,param_2,param_3);
        }
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x114;
    } while (uVar2 < *(uint *)(param_1 + 0x40));
  }
  return;
}

