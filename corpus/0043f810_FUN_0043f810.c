
void FUN_0043f810(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = find_ui_elem_by_id_(param_1,param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xf4) = param_3;
  }
  return;
}

