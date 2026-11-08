
void FUN_0043e6a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = find_ui_elem_by_name(param_1,param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x104) = param_3;
    *(uint *)(iVar1 + 0x11c) = *(uint *)(iVar1 + 0x11c) | 4;
    Ui_RefreshWindow(param_1,iVar1 + 0x40,iVar1 + 0x10c,0);
  }
  return;
}

