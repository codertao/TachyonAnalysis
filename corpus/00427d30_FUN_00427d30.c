
void FUN_00427d30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,uint param_6,uint param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11)

{
  clr_bytes(param_1,0x34);
  *param_1 = param_2;
  param_1[2] = param_4;
  param_1[4] = param_9;
  param_1[1] = param_3;
  param_1[5] = param_8;
  param_1[3] = (param_5 << 8 | param_6) << 8 | param_7;
  param_1[9] = param_10;
  param_1[0xc] = param_11;
  return;
}

