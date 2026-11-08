
void FUN_0043e770(undefined4 uiMgr,undefined4 dlg_type,undefined4 err_reason)

{
  int iVar1;
  
  iVar1 = FUN_0043bf10(uiMgr,err_reason);
  if (iVar1 != 0) {
    FUN_0043e6a0(uiMgr,dlg_type,*(undefined4 *)(iVar1 + 0x40));
    return;
  }
  FUN_0043e6a0(uiMgr,dlg_type,&DAT_00562b14);
  return;
}

