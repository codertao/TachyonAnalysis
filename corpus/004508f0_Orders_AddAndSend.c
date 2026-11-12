
/* sweep */

void Orders_AddAndSend(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = Orders_Alloc(param_1,param_2 + 0x60);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x98) = *(undefined4 *)(param_2 + 0x8c);
    *(int *)(param_2 + 0x8c) = *(int *)(param_2 + 0x8c) + 1;
    SrvSend_OrderAdd(*(undefined4 *)(iVar1 + 0x98),iVar1 + 0x20,*(undefined4 *)(iVar1 + 0x18),
                     *(undefined4 *)(iVar1 + 0x88),param_2);
  }
  return;
}

