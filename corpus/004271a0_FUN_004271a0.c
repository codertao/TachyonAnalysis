
void FUN_004271a0(int param_1)

{
  undefined4 uVar1;
  undefined1 local_80 [128];
  
  uVar1 = FUN_0048e800(DAT_005a6140,0x5c);
  uVar1 = FUN_0048e800(DAT_005a6140,0x5b,param_1 + 0xf8,uVar1);
  str_sprintf(local_80,s__s___s___s_005361a8,uVar1);
  SrvSend_TextMsg(local_80,1,4,g_SrvCurConn,0,0,0xffffffff);
  return;
}

