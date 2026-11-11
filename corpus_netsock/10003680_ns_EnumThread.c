
void ns_EnumThread(void)

{
  uint uVar1;
  uint uVar2;
  int local_c;
  undefined4 local_8;
  uint local_4;
  
  uVar2 = 0;
  ns_SendEnum(DAT_100198a8);
  while (DAT_100199bc == 0) {
    uVar1 = FUN_10005830();
    while (uVar1 != 0) {
      ns_RecvDatagram(DAT_10019c5c,DAT_10019c64,&local_c,(u_short *)&local_8,&local_4);
      if (local_c != 0) {
        ns_OnEnumReply(local_c,(short)local_8);
      }
      uVar1 = FUN_10005830();
    }
    uVar2 = uVar2 + 1;
    if (0x32 < uVar2) {
      uVar2 = 0;
      ns_SendEnum(DAT_100198a8);
    }
    Sleep(0x14);
    FUN_100035f0();
  }
  DAT_100199b8 = 0;
  _endthread();
  return;
}

