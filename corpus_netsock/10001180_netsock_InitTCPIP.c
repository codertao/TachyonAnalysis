
undefined4 __cdecl netsock_InitTCPIP(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  
                    /* 0x1180  19  netsock_InitTCPIP */
  if (DAT_10019880 == 0) {
    return 1;
  }
  if (DAT_100199b8 != 0) {
    netsock_StopEnumSessions();
  }
  if (param_1 == (byte *)0x0) {
    DAT_10019888._0_1_ = 0;
  }
  else {
    uVar2 = 0xffffffff;
    pbVar4 = param_1;
    do {
      pbVar5 = pbVar4;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pbVar5 = pbVar4 + 1;
      bVar1 = *pbVar4;
      pbVar4 = pbVar5;
    } while (bVar1 != 0);
    uVar2 = ~uVar2;
    pbVar4 = pbVar5 + -uVar2;
    pbVar5 = (byte *)&DAT_10019888;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pbVar5 = *(undefined4 *)pbVar4;
      pbVar4 = pbVar4 + 4;
      pbVar5 = pbVar5 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pbVar5 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    }
    DAT_100198a8 = FUN_10004fa0(param_1);
    DAT_10019c9e = (uint)(DAT_100198a8 == 0xffffffff);
  }
  if (DAT_10019884 == 0) {
    if (DAT_10019c74 == 0) {
      iVar6 = 1;
    }
    else {
      iVar6 = 2;
    }
    iVar6 = FUN_10004d90(iVar6,(undefined2 *)((int)&DAT_10019c70 + 2),(undefined2)DAT_10019c70);
    if (iVar6 != 0) {
      return 0x100;
    }
    DAT_10019884 = 1;
    FUN_10005660((char *)0x0);
  }
  return 0;
}

