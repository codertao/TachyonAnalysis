
/* sweep */

void Sped_InitWeapons(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                     uint param_6,undefined4 param_7)

{
  if (param_3 != 0) {
    do {
      WeaponSys_InitDefault(param_1,param_2,param_5,param_7);
      if ((param_6 & 0x100000) != 0) {
        *(uint *)(param_1 + 0x2c) = (*(uint *)(param_1 + 0x2c) >> 2) + *(uint *)(param_1 + 0x2c);
      }
      if (param_4 == 0) {
        *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
        *(undefined4 **)(param_1 + 0x1c) = &DAT_005897e4;
      }
      else {
        *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
        *(undefined4 **)(param_1 + 0x1c) = &DAT_005b3304;
      }
      param_1 = param_1 + 0x38;
      param_2 = param_2 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

