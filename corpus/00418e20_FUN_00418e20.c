
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00418e20(int param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  
  _DAT_005b3194 = *param_2 - *param_3;
  _DAT_005b3198 = param_2[1] - param_3[1];
  _DAT_005b319c = param_2[2] - param_3[2];
  DAT_005b31a0 = FUN_004e0462(&DAT_005b3194);
  FUN_004e04ba(&DAT_005b3194);
  do {
    if (param_1 == 0) {
      return 0;
    }
    if ((param_1 != DAT_005b2d80) && (param_1 != DAT_005b2d84)) {
      if (*(int *)(param_1 + 0xb8) == 0) {
        iVar1 = FUN_004187d0(param_3,param_2,param_1,0x10000,&DAT_005b3194,DAT_005b31a0);
        if (iVar1 != 0) {
          iVar1 = FUN_004b36b0(param_3,param_2,param_1 + 0x18,param_4,0x10000,
                               *(undefined4 *)(param_1 + 0xc4));
          if (iVar1 != 0) {
            FUN_004b1c10(param_1 + 0x18,param_4);
            if (DAT_005b3190 == (code *)0x0) {
              return param_1;
            }
            iVar1 = (*DAT_005b3190)(DAT_005b2d80,param_1);
            goto joined_r0x00418f5b;
          }
        }
      }
      else {
        iVar1 = FUN_004187d0(param_3,param_2,param_1,0x10000,&DAT_005b3194,DAT_005b31a0);
        if (iVar1 != 0) {
          *param_4 = *(undefined4 *)(param_1 + 0x34);
          param_4[1] = *(undefined4 *)(param_1 + 0x38);
          param_4[2] = *(undefined4 *)(param_1 + 0x3c);
          if (DAT_005b3190 == (code *)0x0) {
            return param_1;
          }
          iVar1 = (*DAT_005b3190)(DAT_005b2d80,param_1);
joined_r0x00418f5b:
          if (iVar1 != 0) {
            return param_1;
          }
        }
      }
    }
    param_1 = *(int *)(param_1 + 0x9c);
  } while( true );
}

