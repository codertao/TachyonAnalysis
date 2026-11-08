
void FUN_0040c8f0(int param_1,undefined4 param_2)

{
  undefined1 local_80 [128];
  
  str_sprintf(local_80,s_YOU_HAVE_GAINED__d_EXPERIENCE__00533550,param_2);
  SrvSend_TextMsg(local_80,0,4,*(undefined4 *)(param_1 + 0xdc),0xffffffff,0,DAT_005a6324 & 0xff);
  return;
}

