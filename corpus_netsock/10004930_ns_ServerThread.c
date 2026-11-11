
void ns_ServerThread(void)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  uint uVar4;
  int iStack_c;
  _union_1226 _Stack_8;
  uint uStack_4;
  
  uVar4 = 1;
  iStack_c = 0;
  DAT_10019b34 = timeGetTime();
  while (DAT_10019b08 == 0) {
    uVar1 = FUN_10005830();
    while (uVar1 != 0) {
      ns_RecvDatagram(DAT_10019c5c,DAT_10019c64,&_Stack_8,(u_short *)&iStack_c,&uStack_4);
      if (DAT_10019ca2 != 0) {
        iVar2 = rand();
        uVar4 = iVar2 >> 4 & DAT_10019ca2;
      }
      if ((_Stack_8.S_addr != 0) && (uVar4 != 0)) {
        ns_ServerDispatch((in_addr)_Stack_8.S_un_b,iStack_c);
      }
      uVar1 = FUN_10005830();
    }
    FUN_100048c0();
    FUN_100028c0();
    DVar3 = timeGetTime();
    if (DAT_10019b34 + 1000 < DVar3) {
      ns_SrvTimeouts();
      DAT_10019b34 = DVar3;
    }
    NwPing_Tick(DVar3);
    Sleep(5);
  }
  FUN_10003ad0((int *)&DAT_10019b0c);
  FUN_10003ad0((int *)&DAT_10019b20);
  FUN_10002d90();
  _endthread();
  return;
}

