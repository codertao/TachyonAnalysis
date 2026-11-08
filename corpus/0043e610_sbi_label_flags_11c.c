
void sbi_label_flags_11c(undefined4 uiCtx,undefined4 name,undefined4 flags)

{
  int iVar1;
  
  iVar1 = find_ui_elem_by_name(uiCtx,name);
  if (iVar1 != 0) {
    sbi_flags(iVar1 + 0x11c,flags);
  }
  return;
}

