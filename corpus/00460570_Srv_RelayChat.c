
/* refine: chat echo to sender (flag 4) and, unless Stub_ReturnZeroB (server-command hook) claims
   it, relay to others (flag 2|mode) + UI sound */

void Srv_RelayChat(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  SrvSend_TextMsg(param_2,0,4,param_1,0xffffffff,0,param_5);
  SrvSend_UiSound(param_6,param_7,param_8,param_3 | 4,param_4,0xffffffff,param_1,0);
  iVar1 = Stub_ReturnZeroB(param_2);
  if (iVar1 == 0) {
    SrvSend_TextMsg(param_2,0,param_3 | 2,param_1,param_4,0,param_5);
    SrvSend_UiSound(param_6,param_7,param_8,param_3 | 2,param_4,0xffffffff,param_1,0);
  }
  return;
}

