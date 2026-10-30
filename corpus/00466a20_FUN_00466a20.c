
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466a20(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0048e380(&DAT_00589760,0x50);
  if (DAT_005b2b50 != -1) {
    iVar1 = FUN_004a7fd0(DAT_005b2b50,&DAT_00589788);
    if (iVar1 != 0) {
      DAT_00589798 = FUN_004a8010(param_2);
      FUN_004669d0();
      FUN_004669a0(param_1);
      _DAT_00589784 = 1;
      return;
    }
    iVar1 = FUN_004a7fd0(0,&DAT_00589788);
    if (iVar1 != 0) {
      DAT_00589798 = FUN_004a8010(param_2,&DAT_00589788);
      FUN_004669d0();
      FUN_004669a0(param_1);
      _DAT_00589784 = 1;
    }
  }
  return;
}

