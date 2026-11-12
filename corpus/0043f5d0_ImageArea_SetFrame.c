
/* sweep: +0xe0 */

void ImageArea_SetFrame(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = find_ui_elem_by_id_(param_1,param_2);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe0) != param_3)) {
    *(int *)(iVar1 + 0xe0) = param_3;
    if (*(int *)(iVar1 + 0xdc) < param_3) {
      *(undefined4 *)(iVar1 + 0xe0) = *(undefined4 *)(iVar1 + 0xd8);
    }
    *(uint *)(iVar1 + 0x10c) = *(uint *)(iVar1 + 0x10c) | 0x400;
  }
  return;
}

