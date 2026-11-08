
void FUN_0040cb10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040c940(&DAT_00532ed8,*(undefined4 *)(param_1 + 0x100));
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  else if (10 < iVar1) {
    iVar1 = 10;
  }
  if (iVar1 != *(int *)(param_1 + 0xfc)) {
    if (*(int *)(param_1 + 0xfc) < iVar1) {
      FUN_0040c990();
    }
    else {
      FUN_0040ca50(param_1,iVar1);
    }
    *(int *)(param_1 + 0xfc) = iVar1;
    SrvSend_RankChange(*(undefined4 *)(param_1 + 0xdc));
  }
  return;
}

