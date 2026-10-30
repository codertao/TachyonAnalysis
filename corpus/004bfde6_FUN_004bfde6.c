
void FUN_004bfde6(int param_1,undefined4 *param_2)

{
  if ((param_1 != 0) && ((*(byte *)((int)param_2 + 0xd) & 0x10) != 0)) {
    FUN_004bfb82(param_2);
    *(byte *)((int)param_2 + 0xd) = *(byte *)((int)param_2 + 0xd) & 0xee;
    param_2[6] = 0;
    *param_2 = 0;
    param_2[2] = 0;
  }
  return;
}

