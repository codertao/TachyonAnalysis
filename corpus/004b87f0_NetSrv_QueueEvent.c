
/* finalize app event {type,size,tag} + delivery spec, add to broadcast list 0x6af69c */

void NetSrv_QueueEvent(int param_1,undefined2 param_2,short param_3,short *param_4)

{
  if ((param_1 != 0) && (param_4 != (short *)0x0)) {
    *(undefined2 *)(param_1 + -8) = param_2;
    *(short *)(param_1 + -6) = param_3 + 8;
    *(undefined4 *)(param_1 + -4) = *(undefined4 *)(param_1 + -0x2c);
    *(int *)(param_1 + -0x24) = (int)*param_4;
    *(undefined4 *)(param_1 + -0x20) = 0;
    *(uint *)(param_1 + -0x1c) = (uint)(ushort)param_4[2];
    *(undefined4 *)(param_1 + -0x14) = *(undefined4 *)(param_4 + 6);
    *(short *)(param_1 + -0x10) = param_4[8];
    *(undefined4 *)(param_1 + -0x18) = *(undefined4 *)(param_4 + 4);
    *(undefined4 *)(param_1 + -0xc) = *(undefined4 *)(param_4 + 10);
    FUN_004b78f0(param_1 + -0x3c,&DAT_006af69c);
  }
  return;
}

