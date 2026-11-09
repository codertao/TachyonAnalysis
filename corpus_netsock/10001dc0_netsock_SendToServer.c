
undefined4 __cdecl netsock_SendToServer(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  
                    /* 0x1dc0  25  netsock_SendToServer */
  puVar1 = DAT_10019c60;
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
    if (DAT_100199b0 != 2) {
      return 0xe;
    }
    *(short *)((int)DAT_10019c60 + 2) = (short)param_2 + 0xc;
    *(undefined2 *)puVar1 = 0x1080;
    puVar3 = puVar1 + 2;
    for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    FUN_10003b20(puVar1,(uint)*(ushort *)((int)puVar1 + 2),(undefined4 *)&DAT_10019c38,DAT_10019b38,
                 DAT_10019c70 & 0xffff,0);
    return 0;
  }
  return 2;
}

