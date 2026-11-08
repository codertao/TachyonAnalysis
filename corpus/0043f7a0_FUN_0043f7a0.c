
undefined4 FUN_0043f7a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = find_ui_elem_by_id_(param_1,param_2);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(iVar1 + 0xdc);
}

