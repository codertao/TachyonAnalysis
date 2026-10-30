
void FUN_004539d0(int param_1)

{
  int local_14;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_14 = (int)(longlong)
                  ROUND(((float)*(int *)(DAT_005b1f0c + 0x25c) * DAT_005b1ecc) /
                        *(float *)(DAT_005b1f0c + 0xbc) + (float)*(int *)(DAT_005b1f0c + 0x254));
  if (local_14 == DAT_005b1f04) {
    DAT_005b1f08 = DAT_005b1f08 + 1;
  }
  else {
    DAT_005b1f08 = DAT_005b1f08 + -8;
    if (DAT_005b1f08 < 0) {
      DAT_005b1f08 = 0;
    }
    DAT_005b1f04 = local_14;
  }
  if (100 < DAT_005b1f08) {
    local_14 = local_14 + (100 - DAT_005b1f08) * 8;
    if (local_14 < *(int *)(DAT_005b1f0c + 0x254)) {
      local_14 = *(int *)(DAT_005b1f0c + 0x254);
    }
    if (0x5dc < DAT_005b1f08) {
      DAT_005b1f08 = 0x5dc;
    }
  }
  FUN_004663f0(*(undefined4 *)(param_1 + 0x104),local_14);
  FUN_004661a0(*(undefined4 *)(param_1 + 0x104),&DAT_005b9600,&local_c);
  FUN_00466430(*(undefined4 *)(param_1 + 0x104),0);
  return;
}

