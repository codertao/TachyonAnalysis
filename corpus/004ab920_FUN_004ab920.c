
bool FUN_004ab920(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_0055e3e0 == 0) {
    return false;
  }
  DAT_0055e424 = 0;
  do {
    iVar1 = netsock_SendToServer(param_1,param_2);
    if (iVar1 != 0x10) {
      return iVar1 != 0;
    }
    DAT_0055e424 = DAT_0055e424 + 1;
    MessagePump_IdleTick();
  } while (DAT_0055e424 < 0x801);
  return (bool)2;
}

