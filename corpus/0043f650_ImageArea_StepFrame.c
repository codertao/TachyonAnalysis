
/* sweep: guess */

void ImageArea_StepFrame(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = find_ui_elem_by_id_(param_1,param_2);
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0xd4);
    *(uint *)(iVar2 + 0x10c) = *(uint *)(iVar2 + 0x10c) | 0x400;
    *(int *)(iVar2 + 0xc4) = param_3;
    *(int *)(iVar2 + 200) = param_4;
    *(int *)(iVar2 + 0xcc) = param_3 + 1;
    *(int *)(iVar2 + 0xd0) = param_3 + 1;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1680) != 0)) {
      *(int *)(iVar2 + 0xcc) = *(int *)(iVar1 + 0x166c) + param_3;
      *(int *)(iVar2 + 0xd0) = *(int *)(iVar1 + 0x1670) / *(int *)(iVar1 + 0x1680) + param_4;
    }
  }
  return;
}

