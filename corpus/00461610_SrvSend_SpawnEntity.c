
/* S->C 0x1106 */

void SrvSend_SpawnEntity(int param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_4;
  
  iVar1 = maybe_take_some_mem();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0x3c);
    Tach_SrvWriteEntityRecordExt(param_1,(undefined4 *)(param_1 + 0x34),iVar1);
    local_4 = *(undefined4 *)(param_1 + 100);
    local_18 = 0x800;
    local_14 = 0x20;
    NetSrv_QueueEvent(iVar1,0x1106,0x28,&local_18);
  }
  return;
}

