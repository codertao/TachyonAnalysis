
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: slot 0x3c */

undefined4 DPlay_JoinSession(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  _DAT_00564954 = 0;
  if (DAT_0055e3e0 == 0) {
    _DAT_00564954 = 0xffffffff;
    return 0xffffffff;
  }
  if (param_1 == 0) {
    _DAT_00564954 = 0xfffffffe;
    return 0xffffffff;
  }
  puVar2 = &DAT_005b9c60;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_005b9c60 = 0x50;
  _DAT_005b9c68 = *(undefined4 *)(param_1 + 0x10);
  _DAT_005b9c6c = *(undefined4 *)(param_1 + 0x14);
  _DAT_005b9c70 = *(undefined4 *)(param_1 + 0x18);
  _DAT_005b9c74 = *(undefined4 *)(param_1 + 0x1c);
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    _DAT_005b9c94 = param_2;
  }
  DAT_0055e428 = 0;
  iVar1 = (**(code **)(*DAT_005b9af4 + 0x60))(DAT_005b9af4,&DAT_005b9c60,0x81);
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 == -0x7788fff6) {
    _DAT_00564954 = 0xfffffffd;
    return 0xffffffff;
  }
  if (iVar1 == -0x7788fffb) {
    _DAT_00564954 = 0xfffffffc;
    return 0xffffffff;
  }
  if (iVar1 == -0x7788f830) {
    _DAT_00564954 = 0xfffffffb;
    return 0xffffffff;
  }
  if (iVar1 == -0x7788f7f4) {
    _DAT_00564954 = 0xfffffffa;
    return 0xffffffff;
  }
  if (iVar1 == -0x7788f808) {
    _DAT_00564954 = 0xfffffff9;
    return 0xffffffff;
  }
  if (iVar1 == -0x7788f826) {
    _DAT_00564954 = 0xfffffff8;
    return 0xffffffff;
  }
  if (iVar1 == -0x7788fea2) {
    return 1;
  }
  if (iVar1 == -0x7788f81c) {
    _DAT_00564954 = 0xfffffff7;
    return 0xffffffff;
  }
  if (iVar1 == -0x7788ff88) {
    _DAT_00564954 = 0xfffffff5;
    return 0xffffffff;
  }
  if (iVar1 == -0x7ff8ffa9) {
    _DAT_00564954 = 0xfffffff4;
    return 0xffffffff;
  }
  if (iVar1 == -0x7788feac) {
    _DAT_00564954 = 0xfffffff3;
    return 0xfffffffe;
  }
  if (iVar1 == -0x7788f7e0) {
    _DAT_00564954 = 0xfffffff2;
    return 0xffffffff;
  }
  if (iVar1 == -0x7788ff56) {
    _DAT_00564954 = 0xfffffff1;
    return 0xffffffff;
  }
  if (iVar1 == -0x7788feb6) {
    _DAT_00564954 = 0xfffffff0;
    return 0xfffffffd;
  }
  if (iVar1 == -0x7788f812) {
    _DAT_00564954 = 0xffffffef;
    return 0xffffffff;
  }
  if (iVar1 == -0x7788ff10) {
    _DAT_00564954 = 0xffffffee;
    return 0xffffffff;
  }
  if (iVar1 == -0x7788fec0) {
    _DAT_00564954 = 0xffffffed;
    return 0xffffffff;
  }
  if (iVar1 == -0x7788fee8) {
    _DAT_00564954 = 0xffffffec;
    return 0xffffffff;
  }
  _DAT_00564954 = 0xffffffeb;
  return 0xffffffff;
}

