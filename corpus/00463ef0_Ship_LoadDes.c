
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* parse SHIP .des CBIN into 0x6c8 ship struct (rotation/speed/shields/hull/weapons/mounts) */

undefined4 Ship_LoadDes(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 local_84;
  undefined1 local_80 [128];
  
  FUN_0048e380(&DAT_00562d00,0x6c8);
  FUN_0048e380(&DAT_005633c8,0x1a0);
  puVar4 = param_2;
  puVar5 = &DAT_00562d00;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar1 = Cbin_Open(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_0049bfc0(&PTR_DAT_00549728);
    if (iVar1 != 0) {
      ShipDes_ParseRotation(param_2 + 0x21);
      _DAT_00562dfc = 20000;
      Cbin_GetParam(&DAT_00532af4,&DAT_00532c10,local_80,0x7f,0,4,1);
      _DAT_00563244 = FUN_004580c0(local_80);
      _DAT_00562d18 = FUN_0048e820(DAT_005a6144,s_OTHER_SHIP_NAMES_00533a5c,&DAT_00563508);
      _DAT_00562d1c = FUN_00463cf0();
      FUN_00463a50(&DAT_00562d00);
      FUN_00462d70(&DAT_00563254);
      DAT_00562df0 = DAT_005a6638 * DAT_00562df0 >> 8;
      DAT_00562dd8 = DAT_00562dd8 * DAT_005a6638 >> 8;
      FUN_00463bd0(&DAT_00562d00);
      _DAT_00562e1c = _DAT_00562e08 * _DAT_00562dbc;
      _DAT_00562f28 = DAT_00562f30 - DAT_00562f2c;
      _DAT_00562f5c = DAT_00562f58 - DAT_00562f54;
      _DAT_00562ec4 = DAT_00562ecc - DAT_00562ec8;
      if (DAT_00562f3c == 0) {
        DAT_00562f3c = 0xff;
      }
      FUN_00431850(&DAT_00562f90,&DAT_00562fc8,&DAT_00562fd8,&DAT_00562fd8,&DAT_005a7538,1);
      if ((DAT_00562fa8 != '\0') && (param_3 != 0)) {
        FUN_00431850(&DAT_00562f9c,&DAT_00562fa8,0,&DAT_00562fb8,&DAT_005a7538,1);
      }
      Object_ParseHardpoints(&DAT_00563298,DAT_00562f90);
      FUN_00463db0(&DAT_00563338);
      iVar1 = Cbin_GetScalar(s_CONNECT_0054a20c,s_LAND_POINT_0054a214,0,0,&local_84);
      if (iVar1 != 0) {
        FUN_00462e30(DAT_00562f90,local_84,&DAT_00563298);
      }
      uVar3 = 0;
      if (DAT_0056300c != 0) {
        puVar2 = &DAT_00563010;
        puVar6 = &DAT_005631d0;
        do {
          FUN_004638a0(uVar3,puVar2,puVar6,DAT_00562f90);
          uVar3 = uVar3 + 1;
          puVar6 = puVar6 + 0xc;
          puVar2 = puVar2 + 0x38;
        } while (uVar3 < DAT_0056300c);
      }
      FUN_004639c0(&DAT_00562d00,DAT_00562f90);
      _DAT_00562f44 = FUN_00465f20(DAT_00562f38);
      if (DAT_00563528 != '\0') {
        _DAT_00563268 = FUN_00406e80(&DAT_00563528,1);
      }
      _DAT_005633c4 = FUN_00462c80(&DAT_00563558);
      FUN_00462dd0(&DAT_0056332c);
      _DAT_00563264 = FUN_00463d50();
      if (DAT_0056332c != 0) {
        _DAT_00563264 = _DAT_00563264 | 0x800;
      }
      _DAT_0056325c = FUN_00462cc0(&DAT_00563538);
      Cbin_Close();
      _DAT_00563284 = FUN_004012e0;
      puVar4 = &DAT_00562d00;
      for (iVar1 = 0x1b2; iVar1 != 0; iVar1 = iVar1 + -1) {
        *param_2 = *puVar4;
        puVar4 = puVar4 + 1;
        param_2 = param_2 + 1;
      }
      return 1;
    }
    return 0;
  }
  return 0;
}

