
/* action 8/8,11,12, 11/0: add in every quadrant; 11/12 trigger wingman chatter */

void TrigAct_OrderAddAll(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = 0;
  puVar2 = &DAT_005a5548;
  if (DAT_005a5544 != 0) {
    do {
      TrigAct_OrderAdd(param_1,param_2,param_3,*puVar2);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x11;
    } while (uVar1 < DAT_005a5544);
  }
  SrvSend_CampaignCheck(param_3);
  if (param_3 != 0xb) {
    if (param_3 == 0xc) {
      Chatter_PlayRandom(3);
    }
    return;
  }
  Chatter_PlayRandom(4);
  return;
}

