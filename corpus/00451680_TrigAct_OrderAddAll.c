
/* action 8/8,11,12, 11/0: add in every quadrant; 11/12 trigger wingman chatter */

void TrigAct_OrderAddAll(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  SectorRec *pSVar2;
  
  uVar1 = 0;
  pSVar2 = g_SectorTable;
  if (g_SectorCount != 0) {
    do {
      TrigAct_OrderAdd(param_1,param_2,param_3,pSVar2->quadrant);
      uVar1 = uVar1 + 1;
      pSVar2 = pSVar2 + 1;
    } while (uVar1 < g_SectorCount);
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

