
void FUN_004568a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0048e800(DAT_005a6140,param_1);
  if (iVar1 != 0) {
    SrvSend_TextMsg(iVar1,1,4,param_2,0,0,0xffffffff);
  }
  return;
}

