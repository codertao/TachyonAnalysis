
int FUN_004615c0(int param_1,undefined4 param_2,int param_3)

{
  FUN_004614e0(param_1,param_2,param_3,8);
  *(short *)(param_3 + 0x18) = (short)((uint)*(undefined4 *)(param_1 + 0x1c) >> 8);
  if ((*(byte *)(param_1 + 0xc3) & 4) != 0) {
    *(undefined2 *)(param_3 + 0x1a) = *(undefined2 *)(*(int *)(param_1 + 0x8c) + 0x14);
    return param_3 + 0x1c;
  }
  *(undefined2 *)(param_3 + 0x1a) = 0xffff;
  return param_3 + 0x1c;
}

