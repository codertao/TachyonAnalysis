
/* sweep */

void ChatInput_Send(void)

{
  undefined1 local_100 [256];
  
  if (DAT_005b91c4 != 0) {
    if ((g_FlightStateFlags & 4) != 0) {
      something_decrypt_related();
      return;
    }
    str_sprintf(local_100,s__s___s_00534230,&DAT_005b91d0,&DAT_005b90c4);
    if ((g_FlightStateFlags & 2) == 0) {
      SrvSend_TextMsg(local_100,0,0,0,0xffffffff,0,DAT_005a6324 & 0xff);
    }
    else {
      Tach_SendChat(DAT_005b91cc,DAT_005b91c8,local_100);
    }
    DAT_005b90c4._0_1_ = 0;
    DAT_005b91c4 = 0;
  }
  return;
}

