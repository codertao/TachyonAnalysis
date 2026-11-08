
void FUN_0040ca50(int param_1,int param_2)

{
  undefined1 local_80 [128];
  
  str_sprintf(local_80,s_YOU_HAVE_LOST_YOUR_CURRENT_RANK__005335d4,param_2);
  SrvSend_TextMsg(local_80,0,4,*(undefined4 *)(param_1 + 0xdc),0xffffffff,0,DAT_005a6324 & 0xff);
  SrvSend_UiSound(1,0x1c,0,4,0xffffffff,0xffffffff,*(undefined4 *)(param_1 + 0xdc),0);
  if (*(int *)(&DAT_0053304c + param_2 * 4) != 0) {
    str_sprintf(local_80,s_SHIP_DOWNGRADED____s_DECREASED_005335b4,
                *(int *)(&DAT_0053304c + param_2 * 4));
    SrvSend_TextMsg(local_80,1,4,*(undefined4 *)(param_1 + 0xdc),0xffffffff,0,DAT_005a6324 & 0xff);
  }
  return;
}

