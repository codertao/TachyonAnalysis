
/* action 9: remove objective; type 10 = clear all; SrvSend_OrderUpdate op 2 */

void TrigAct_OrderRemove(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int local_80;
  undefined4 local_7c;
  
  if (param_3 == 10) {
    FUN_00451720(param_4 + 0x60,param_4);
    return;
  }
  local_80 = param_3;
  local_7c = param_2;
  iVar1 = FUN_004516f0(&local_80,param_4 + 0x60);
  if (iVar1 != 0) {
    SrvSend_OrderUpdate(*(undefined4 *)(iVar1 + 0x98),2,param_4);
    FUN_00450ab0(iVar1,param_4 + 0x60);
  }
  return;
}

