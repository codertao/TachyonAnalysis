
/* action 8: add objective of type `code` about arg2 to this quadrant (+0x60); SrvSend_CampaignCheck
    */

void TrigAct_OrderAdd(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 local_80 [128];
  
  Order_BuildText(local_80,param_3,param_2,param_4);
  FUN_004508f0(local_80,param_4);
  if (param_3 == 8) {
    Nav_RestoreDestination(param_4);
  }
  SrvSend_CampaignCheck(param_3);
  return;
}

