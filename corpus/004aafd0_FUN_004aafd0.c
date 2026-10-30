
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004aafd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (DAT_0055e3e0 == 0) {
    return 0;
  }
  _DAT_005b9c54 = 0;
  _DAT_005b9c50 = 0x10;
  _DAT_005b9c58 = param_2;
  _DAT_005b9c5c = 0;
  uVar1 = (**(code **)(*DAT_005b9af4 + 0x78))(DAT_005b9af4,param_1,&DAT_005b9c50,0);
  return uVar1;
}

