
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004aa930(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (DAT_0055e3e0 != 0) {
    _DAT_005b9c54 = 0;
    _DAT_005b9c50 = 0x10;
    _DAT_005b9c5c = 0;
    _DAT_005b9c58 = param_1;
    if ((param_2 != 0) && (DAT_0055e448 == 0)) {
      uVar2 = 0x100;
    }
    iVar1 = (**(code **)(*DAT_005b9af4 + 0x18))
                      (DAT_005b9af4,&DAT_0055e3fc,&DAT_005b9c50,0,param_3,param_4,uVar2);
    if (param_2 != 0) {
      DAT_0055e400 = DAT_0055e3fc;
    }
    if ((iVar1 != 0) && (iVar1 != -0x7788fff6)) {
      if (iVar1 == -0x7788ffd8) {
        return 1;
      }
      if (iVar1 == -0x7788ffc4) {
        return 1;
      }
      if (iVar1 == -0x7788ff88) {
        return 1;
      }
      return 1;
    }
  }
  return 0;
}

