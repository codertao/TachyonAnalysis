
void FUN_00439810(uint param_1,uint param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  
  *param_3 = 1;
  *param_4 = 1;
  while ((uint)(1 << (*param_3 & 0x1f)) < param_1) {
    *param_3 = *param_3 + 1;
  }
  while ((uint)(1 << (*param_4 & 0x1f)) < param_2) {
    *param_4 = *param_4 + 1;
  }
  bVar1 = *param_3;
  if ((*param_4 < bVar1) && (3 < (int)((uint)bVar1 - (uint)*param_4))) {
    *param_4 = bVar1 - 3;
  }
  bVar1 = *param_4;
  if ((*param_3 < bVar1) && (3 < (int)((uint)bVar1 - (uint)*param_3))) {
    *param_3 = bVar1 - 3;
  }
  return;
}

