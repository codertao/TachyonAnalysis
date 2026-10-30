
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004196c0(int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  _DAT_005b3194 = *param_2 - *param_3;
  _DAT_005b3198 = param_2[1] - param_3[1];
  _DAT_005b319c = param_2[2] - param_3[2];
  DAT_005b31a0 = FUN_004e046f(&DAT_005b3194);
  FUN_004e054e(&DAT_005b3194);
  iVar3 = DAT_005b2d88;
  do {
    if (param_1 == 0) {
      return 0;
    }
    if ((param_1 != DAT_005b2d80) && (param_1 != DAT_005b2d84)) {
      if (iVar3 == 0) {
        iVar2 = *(int *)(param_1 + 0xb8);
      }
      else {
        iVar2 = iVar3;
        if (*(int *)(param_1 + 0xb8) == 0) {
          iVar2 = 0x10000;
        }
      }
      if (((*(int *)(param_1 + 0x58) != 0) &&
          ((*(byte *)(*(int *)(param_1 + 0x58) + 0x28) & 1) != 0)) &&
         (iVar1 = FUN_00418910(param_3,param_2,param_1,0x10000,&DAT_005b3194,DAT_005b31a0),
         iVar3 = DAT_005b2d88, iVar1 != 0)) {
        iVar2 = FUN_004b36b0(param_3,param_2,param_1 + 0x18,param_4,iVar2,
                             *(undefined4 *)(param_1 + 0xc4));
        iVar3 = DAT_005b2d88;
        if ((iVar2 != 0) &&
           ((FUN_004b1c10(param_1 + 0x18,param_4), DAT_005b3190 == (code *)0x0 ||
            (iVar2 = (*DAT_005b3190)(DAT_005b2d80,param_1), iVar3 = DAT_005b2d88, iVar2 != 0)))) {
          return param_1;
        }
      }
    }
    param_1 = *(int *)(param_1 + 0x9c);
  } while( true );
}

