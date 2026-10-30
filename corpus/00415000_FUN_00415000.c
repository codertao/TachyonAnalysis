
void FUN_00415000(int param_1,uint param_2)

{
  if (*(byte *)(param_1 + 0xc2) != param_2) {
    if (*(byte *)(param_1 + 0xc2) == 2) {
      if (param_2 != 2) {
        DAT_005b39a8 = DAT_005b39a8 + -1;
      }
    }
    else if (param_2 == 2) {
      DAT_005b39a8 = DAT_005b39a8 + 1;
    }
  }
  *(char *)(param_1 + 0xc2) = (char)param_2;
  if (param_2 == 2) {
    DAT_005b39a8 = DAT_005b39a8 + 1;
  }
  return;
}

