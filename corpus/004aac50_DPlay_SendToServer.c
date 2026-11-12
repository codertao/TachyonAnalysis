
/* sweep */

undefined4 DPlay_SendToServer(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_0055e3e0 == 0) {
    return 0;
  }
  DAT_0055e424 = 0;
  do {
    iVar1 = (**(code **)(*DAT_005b9af4 + 0x68))
                      (DAT_005b9af4,DAT_0055e3fc,DAT_0055e400,0,param_1,param_2);
    if (iVar1 != -0x7788fef2) {
      if (iVar1 == 0) {
        DAT_0055e410 = DAT_0055e410 + 1;
        return 0;
      }
      return 1;
    }
    DAT_0055e424 = DAT_0055e424 + 1;
    MessagePump_IdleTick();
  } while (DAT_0055e424 < 0x801);
  return 2;
}

