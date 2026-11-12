
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: slot 0x2c: DPSPGUID_IPX */

undefined4 DPlay_InitIPX(void)

{
  int iVar1;
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
    iVar1 = DPlay_RecreateInstance();
    if (iVar1 < 0) {
      return 1;
    }
  }
  local_18 = DAT_0052eef8;
  local_10 = DAT_0052ef00;
  local_c = DAT_0052ef04;
  local_14 = DAT_0052eefc;
  local_4 = &DAT_0052ef38;
  local_8 = 0x10;
  _DAT_00564958 = 0x100;
  iVar1 = (**(code **)(*DAT_005b9c00 + 0x38))(DAT_005b9c00,&local_18,1,&DAT_005b9b00,&DAT_00564958);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = (**(code **)(*DAT_005b9af4 + 0x98))(DAT_005b9af4,&DAT_005b9b00,0);
  if (iVar1 != 0) {
    return 1;
  }
  DAT_0055e3e4 = 1;
  return 0;
}

