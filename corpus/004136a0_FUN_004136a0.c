
undefined4 FUN_004136a0(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 8) {
    FUN_00413680(param_1,param_3);
  }
  else if (param_2 == 0x16) {
    if (*(char *)(param_1 + 0xc2) == '\x02') {
      DAT_005b39a8 = DAT_005b39a8 + 1;
      return 0;
    }
  }
  else if (((param_2 == 0x17) && (*(char *)(param_1 + 0xc2) == '\x02')) &&
          (*(int *)(param_1 + 0xd4) == 0)) {
    DAT_005b39a8 = DAT_005b39a8 + -1;
    return 0;
  }
  return 0;
}

