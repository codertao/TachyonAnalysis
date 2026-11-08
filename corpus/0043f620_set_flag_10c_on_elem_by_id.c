
void set_flag_10c_on_elem_by_id(undefined4 uiCtx,undefined4 name,uint flag)

{
  int iVar1;
  
  iVar1 = find_ui_elem_by_id_(uiCtx,name);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x10c) = *(uint *)(iVar1 + 0x10c) | flag;
  }
  return;
}

