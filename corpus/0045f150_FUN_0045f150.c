
void FUN_0045f150(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0045d680(*param_1,*(undefined4 *)(DAT_0058b064 + 100));
  if (iVar1 != 0) {
    SrvSend_EntityClassInfo(iVar1);
  }
  return;
}

