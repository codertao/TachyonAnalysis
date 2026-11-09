
int __cdecl netsock_JoinSession(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  
                    /* 0x1420  21  netsock_JoinSession */
  if (DAT_10019880 == 0) {
    return 1;
  }
  if (DAT_10019884 == 0) {
    return 0x200;
  }
  if (param_1 == (int *)0x0) {
    return 2;
  }
  if (*param_1 != 0x100) {
    return 0x1000;
  }
  if (DAT_100199e4 == 0) {
    puVar3 = &DAT_100198ac;
    for (iVar1 = 0x43; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    piVar2 = param_1;
    piVar4 = &DAT_100199f0;
    for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    }
    iVar1 = FUN_100038f0((int)param_1);
    if (iVar1 == 0) {
      return 10;
    }
    FUN_100057f0();
    FUN_10003a10();
  }
  else if (DAT_100199ec != 9) {
    DAT_100199e4 = 0;
    return DAT_100199ec;
  }
  return DAT_100199ec;
}

