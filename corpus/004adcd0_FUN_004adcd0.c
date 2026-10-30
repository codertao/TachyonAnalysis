
int FUN_004adcd0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = param_2;
  param_1[1] = param_3 * param_4 * param_5;
  param_1[0x13] = param_5;
  param_1[0x14] = param_3 * param_5;
  param_1[0x12] = param_5 << 3;
  param_1[6] = param_3 << 7;
  param_1[7] = param_4 << 7;
  param_1[0xe] = (param_4 << 7) >> 1;
  param_1[0xd] = (param_3 << 7) >> 1;
  param_1[2] = param_3;
  param_1[10] = param_3;
  param_1[0x11] = (param_3 << 0x10) / 0x140;
  param_1[3] = param_4;
  param_1[0xb] = param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = (param_3 * 0x100) / 0x140;
  return param_3 * 0x66666700;
}

