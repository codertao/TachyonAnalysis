
/* [inferred from Ui_ShowWindow text loop, stride 0x130] */

void Ui_AddTextToWindow(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_0043a7a0(param_1,param_2 + 0x80);
    *(int *)(param_2 + 0xd4) = iVar1;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x60) == 0) {
        FUN_00439cc0(param_1,iVar1,*(undefined4 *)(iVar1 + 0x1680),param_3);
      }
      if (*(int *)(param_2 + 0xdc) == -1) {
        *(int *)(param_2 + 0xdc) = *(int *)(*(int *)(param_2 + 0xd4) + 0x1680) + -1;
      }
      iVar1 = *(int *)(param_2 + 0xd4);
      *(int *)(param_2 + 0xcc) = *(int *)(iVar1 + 0x166c) + *(int *)(param_2 + 0xc4);
      *(int *)(param_2 + 0xd0) =
           *(int *)(iVar1 + 0x1670) / *(int *)(iVar1 + 0x1680) + *(int *)(param_2 + 200);
      *(uint *)(param_2 + 0x10c) = *(uint *)(param_2 + 0x10c) | 0x400;
    }
  }
  return;
}

