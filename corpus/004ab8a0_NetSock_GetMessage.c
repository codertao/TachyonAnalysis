
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* netsock_GetMessage wrapper (0x8000 buf), skips system msgs (sender id 0) */

undefined4 NetSock_GetMessage(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_4;
  
  local_4 = 0x8000;
  if (DAT_0055e3e0 != 0) {
    iVar1 = netsock_GetMessage(DAT_005649a0,&local_4,&DAT_0055e404);
    _DAT_0055e41c = DAT_005649a0;
    DAT_0055e420 = local_4;
    if (iVar1 == 0) {
      DAT_0055e414 = DAT_0055e414 + 1;
      if (DAT_0055e404 == 0) {
        FUN_004ab7a0(DAT_005649a0);
        uVar2 = NetSock_GetMessage();
        return uVar2;
      }
      return DAT_005649a0;
    }
  }
  return 0;
}

