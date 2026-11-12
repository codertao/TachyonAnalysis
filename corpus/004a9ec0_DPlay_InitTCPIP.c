
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: slot 0x20: address = DPAID_ServiceProvider TCPIP + DPAID_INet (host string) */

undefined4 DPlay_InitTCPIP(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
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
  uint local_8;
  char *local_4;
  
  if (DAT_0055e3e0 == 0) {
    return 1;
  }
  if (DAT_0055e3e4 != 0) {
    iVar2 = DPlay_RecreateInstance();
    if (iVar2 < 0) {
      return 1;
    }
  }
  local_28 = DAT_0052ef00;
  local_30 = DAT_0052eef8;
  local_2c = DAT_0052eefc;
  local_14 = DAT_0052eeec;
  local_24 = DAT_0052ef04;
  local_18 = DAT_0052eee8;
  local_4 = (char *)*param_1;
  local_10 = DAT_0052eef0;
  local_c = DAT_0052eef4;
  local_8 = 0xffffffff;
  local_1c = &DAT_0052eed8;
  local_20 = 0x10;
  pcVar3 = local_4;
  do {
    if (local_8 == 0) break;
    local_8 = local_8 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_8 = ~local_8;
  _DAT_00564958 = 0x100;
  iVar2 = (**(code **)(*DAT_005b9c00 + 0x38))(DAT_005b9c00,&local_30,2,&DAT_005b9b00,&DAT_00564958);
  if (iVar2 != 0) {
    return 1;
  }
  iVar2 = (**(code **)(*DAT_005b9af4 + 0x98))(DAT_005b9af4,&DAT_005b9b00,0);
  if (iVar2 != 0) {
    return 1;
  }
  DAT_0055e3e4 = 2;
  return 0;
}

