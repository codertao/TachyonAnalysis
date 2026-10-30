
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a9fd0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  char *local_4;
  
  if (DAT_0055e3e0 == 0) {
    return 1;
  }
  if (DAT_0055e3e4 != 0) {
    iVar2 = thunk_FUN_004aa330();
    if (iVar2 < 0) {
      return 1;
    }
  }
  FUN_004a9c00();
  local_48 = DAT_0052eef8;
  local_44 = DAT_0052eefc;
  local_3c = DAT_0052ef04;
  local_30 = DAT_0052ee88;
  local_28 = DAT_0052ee90;
  local_24 = DAT_0052ee94;
  local_20 = 0xffffffff;
  local_1c = &DAT_0056495c;
  local_40 = DAT_0052ef00;
  local_34 = &DAT_0052eea8;
  pcVar3 = (char *)&DAT_0056495c;
  do {
    if (local_20 == 0) break;
    local_20 = local_20 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_2c = DAT_0052ee8c;
  local_14 = DAT_0052ef0c;
  local_18 = DAT_0052ef08;
  local_38 = 0x10;
  local_4 = (char *)*param_1;
  local_20 = ~local_20;
  local_10 = DAT_0052ef10;
  local_8 = 0xffffffff;
  local_c = DAT_0052ef14;
  pcVar3 = local_4;
  do {
    if (local_8 == 0) break;
    local_8 = local_8 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_8 = ~local_8;
  _DAT_00564958 = 0x100;
  iVar2 = (**(code **)(*DAT_005b9c00 + 0x38))(DAT_005b9c00,&local_48,3,&DAT_005b9b00,&DAT_00564958);
  if (iVar2 != 0) {
    return 1;
  }
  iVar2 = (**(code **)(*DAT_005b9af4 + 0x98))(DAT_005b9af4,&DAT_005b9b00,0);
  if (iVar2 != 0) {
    return 1;
  }
  DAT_0055e3e4 = 3;
  return 0;
}

