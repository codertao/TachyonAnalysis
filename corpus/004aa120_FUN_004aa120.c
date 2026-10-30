
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004aa120(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined *local_4;
  
  if (DAT_0055e3e0 == 0) {
    return 1;
  }
  if (DAT_0055e3e4 != 0) {
    iVar1 = thunk_FUN_004aa330();
    if (iVar1 < 0) {
      return 1;
    }
  }
  local_30 = DAT_0052eef8;
  local_2c = DAT_0052eefc;
  local_24 = DAT_0052ef04;
  local_28 = DAT_0052ef00;
  local_10 = DAT_0052ef30;
  local_18 = DAT_0052ef28;
  local_14 = DAT_0052ef2c;
  _DAT_005b9ae0 = *param_1;
  local_c = DAT_0052ef34;
  _DAT_005b9ae4 = param_1[1];
  _DAT_005b9ae8 = param_1[2];
  _DAT_005b9aec = param_1[3];
  _DAT_005b9af0 = param_1[4];
  local_1c = &DAT_0052ef18;
  local_20 = 0x10;
  local_4 = &DAT_005b9ae0;
  local_8 = 0x14;
  _DAT_00564958 = 0x100;
  iVar1 = (**(code **)(*DAT_005b9c00 + 0x38))(DAT_005b9c00,&local_30,2,&DAT_005b9b00,&DAT_00564958);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = (**(code **)(*DAT_005b9af4 + 0x98))(DAT_005b9af4,&DAT_005b9b00,0);
  if (iVar1 != 0) {
    return 1;
  }
  DAT_0055e3e4 = 4;
  return 0;
}

