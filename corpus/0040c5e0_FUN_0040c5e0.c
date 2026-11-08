
void FUN_0040c5e0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 local_80 [128];
  
  uVar1 = FUN_0048ec30(*(undefined4 *)(param_2 + 0xbc),*(undefined4 *)(param_1 + 0x5c));
  str_sprintf(local_80,s_BASE_LIFE_SUPPORT_IS_UNDER_ATTAC_0053350c,uVar1);
  SrvSend_TextMsg(local_80,0,0x10,0,*(undefined1 *)(param_2 + 0xc2),0,DAT_005a6320._2_1_);
  return;
}

