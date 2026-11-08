
/* (body, type, size, resendBudget) */

void NetCli_QueueEvent(int param_1,undefined2 param_2,short param_3,short param_4)

{
  if (param_1 != 0) {
    *(short *)(param_1 + -6) = param_3 + 8;
    *(undefined2 *)(param_1 + -8) = param_2;
    *(undefined4 *)(param_1 + -4) = *(undefined4 *)(param_1 + -0x18);
    *(int *)(param_1 + -0x10) = (int)param_4;
    *(undefined4 *)(param_1 + -0xc) = 0;
    FUN_004b78f0(param_1 + -0x28,&DAT_006af62c);
  }
  return;
}

