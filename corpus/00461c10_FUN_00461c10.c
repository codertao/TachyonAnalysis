
int FUN_00461c10(undefined4 param_1,undefined2 *param_2,short *param_3)

{
  *param_2 = 4;
  param_2[1] = 0x50;
  FUN_004257e0(param_1,param_2);
  *param_3 = *param_3 + 1;
  return (uint)(ushort)param_2[1] + (int)param_2;
}

