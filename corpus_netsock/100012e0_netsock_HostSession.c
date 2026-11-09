
undefined4 __cdecl netsock_HostSession(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  
                    /* 0x12e0  17  netsock_HostSession */
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
  puVar5 = &DAT_100198ac;
  for (iVar1 = 0x43; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  piVar3 = param_1;
  piVar4 = &DAT_100198b0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  DAT_100198bc = 0;
  if (DAT_10019940 != '\0') {
    DAT_100198b4 = DAT_100198b4 | 8;
  }
  DAT_10019afc = malloc(param_1[2] * 0xbc);
  if (DAT_10019afc == (undefined4 *)0x0) {
    return 3;
  }
  DAT_10019af8 = malloc(param_1[2] * 0x18);
  if (DAT_10019af8 == (undefined4 *)0x0) {
    return 3;
  }
  puVar5 = DAT_10019afc;
  for (uVar2 = param_1[2] * 0x2f & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  puVar5 = DAT_10019af8;
  for (iVar1 = (param_1[2] * 3 & 0x1fffffffU) << 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  FUN_10004050(0xffffffff,0xffffffff);
  FUN_10004a40();
  DAT_100199b0 = 1;
  DAT_100198ac = 1;
  return 0;
}

