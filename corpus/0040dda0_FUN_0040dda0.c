
void FUN_0040dda0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040cf70(param_1);
  if (iVar1 != 0) {
    DAT_005b97b8 = FUN_0040db40(param_1);
    DAT_005b97b4 = FUN_0041bbd0();
    SrvSend_RoundFreeze();
    FUN_0040db60();
    SrvSend_RoundResult();
  }
  return;
}

