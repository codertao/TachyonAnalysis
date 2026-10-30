
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004527e0(int param_1,int param_2)

{
  *(int *)(DAT_005b3300 + 0x90) = param_1;
  if (param_1 == 0) {
    FUN_004527b0();
  }
  FUN_004101c0(*(undefined4 *)(DAT_005b3300 + 0x90),2);
  if ((param_2 != param_1) && (param_1 != 0)) {
    DAT_005b39f4 = 0xffffffff;
    _DAT_005b2130 = 0;
    DAT_005b2138 = DAT_005b213c;
    _DAT_005b2140 = 0;
    FUN_00466590(1,9,0,0xff);
    *(undefined4 *)(DAT_005b3300 + 0x110) = 0;
  }
  return;
}

