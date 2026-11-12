
/* sweep: guess */

void Orders_CompleteAllForPlayer(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 0x84);
  while (iVar3 = iVar1, iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 8);
    if (*(int *)(iVar3 + 0x1c) == param_1) {
      iVar2 = *(int *)(iVar3 + 0x18);
      if (iVar2 == 0) {
        SrvSend_OrderUpdate(*(undefined4 *)(iVar3 + 0x98),2,param_2);
        Orders_Free(iVar3,param_2 + 0x60);
      }
      else if (iVar2 == 2) {
        SrvSend_OrderUpdate(*(undefined4 *)(iVar3 + 0x98),1,param_2);
      }
      else if (iVar2 == 6) {
        SrvSend_OrderUpdate(*(undefined4 *)(iVar3 + 0x98),1,param_2);
      }
    }
  }
  return;
}

