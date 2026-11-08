
void clr_label_flags_11c(undefined4 ui_ctx,undefined4 elem_name,undefined4 flags)

{
  int iVar1;
  
  iVar1 = find_ui_elem_by_name(ui_ctx,elem_name);
  if (iVar1 != 0) {
    clear_flags(iVar1 + 0x11c,flags);
  }
  return;
}

