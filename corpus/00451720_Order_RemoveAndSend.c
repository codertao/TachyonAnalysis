
/* sweep */

void Order_RemoveAndSend(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar2 = *(int *)(param_1 + 0x24);
    do {
      iVar1 = *(int *)(iVar2 + 8);
      SrvSend_OrderUpdate(*(undefined4 *)(iVar2 + 0x98),2,param_2);
      Orders_Free(iVar2,param_2 + 0x60);
      iVar2 = iVar1;
    } while (iVar1 != 0);
    DAT_0058f488 = iVar1;
    return;
  }
  DAT_0058f488 = 0;
  return;
}

