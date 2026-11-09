
undefined4 __cdecl netsock_SendToClient(undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
                    /* 0x1cf0  24  netsock_SendToClient */
  if (DAT_10019880 == 0) {
    return 1;
  }
  if (DAT_10019884 == 0) {
    return 0x200;
  }
  if (DAT_100198ac == 0) {
    return 4;
  }
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    if (DAT_100199b0 != 1) {
      return 0xd;
    }
    uVar2 = FUN_100019e0(param_3);
    puVar1 = DAT_10019c60;
    if (uVar2 == 0) {
      return 0xb;
    }
    *(short *)((int)DAT_10019c60 + 2) = (short)param_2 + 0xc;
    uVar3 = param_2 >> 2;
    *(undefined2 *)puVar1 = 0x1080;
    puVar4 = puVar1 + 2;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    FUN_10003b20(puVar1,(uint)*(ushort *)((int)puVar1 + 2),(undefined4 *)&DAT_10019b20,
                 *(undefined4 *)(*(int *)(uVar2 + 0xa4) + 4),
                 *(undefined4 *)(*(int *)(uVar2 + 0xa4) + 0x14),0);
    return 0;
  }
  return 2;
}

