
void FUN_004376f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_40 [64];
  
  iVar1 = FUN_004375f0(param_2);
  if (iVar1 == 0) {
    DAT_005a5e28 = s_UNKNOWN_QUADRANT_0053fc1c;
  }
  else {
    DAT_005a5e28 = (char *)Sector_GetQuadrantName(iVar1);
  }
  DAT_005a5e18 = param_2;
  DAT_005a5e14 = param_1;
  if (DAT_005a6730 != 0) {
    str_sprintf(local_40,s_OVR_QUADRANT_SET_TO__s_0053fc30,DAT_005a5e28);
    FUN_0045d9d0(local_40,0);
  }
  FUN_0045ec70(DAT_0058b068,param_3,param_1,param_2);
  return;
}

