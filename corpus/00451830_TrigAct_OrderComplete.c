
/* action 10: SrvSend_OrderUpdate op 1 */

void TrigAct_OrderComplete(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 local_80;
  undefined4 local_7c;
  
  local_80 = param_3;
  local_7c = param_2;
  iVar1 = FUN_004516f0(&local_80,param_4 + 0x60);
  if (iVar1 != 0) {
    SrvSend_OrderUpdate(*(undefined4 *)(iVar1 + 0x98),1,param_4);
  }
  return;
}

