
void FUN_00450940(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x84);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    do {
      SrvSend_OrderAdd(*(undefined4 *)(iVar2 + 0x98),iVar2 + 0x20,*(undefined4 *)(iVar2 + 0x18),
                       *(undefined4 *)(iVar2 + 0x88),param_1);
      iVar2 = *(int *)(iVar2 + 8);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x88));
  }
  return;
}

