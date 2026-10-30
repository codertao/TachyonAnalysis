
/* DESC_TYPE SHIP (1): register SHIP class (entity size 0x6c8, ctor Sped_ConstructEntity, update
   Ship_Update) */

int Ent_CreateShip(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  code *local_64;
  undefined1 *local_60;
  undefined4 local_5c;
  code *local_58;
  undefined1 *local_54;
  code *local_50;
  undefined1 *local_4c;
  code *local_48;
  undefined1 *local_44;
  code *local_3c;
  code *local_38;
  code *local_34;
  undefined1 *local_2c;
  code *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_c;
  undefined1 *local_8;
  
  iVar1 = FUN_0041dbb0(param_1,0);
  if (iVar1 != 0) {
    if (param_3 != 0) {
      FUN_00464210(iVar1);
    }
    if (param_4 != 0) {
      FUN_004642d0(iVar1,param_3);
    }
    return iVar1;
  }
  FUN_0048e380(&local_74,0x74);
  local_70 = 1;
  local_6c = 0x6c8;
  local_68 = 0xffff;
  local_74 = param_1;
  local_58 = FUN_00434e80;
  local_64 = FUN_00463560;
  local_60 = &LAB_00463690;
  local_5c = 0;
  local_48 = Sped_ConstructEntity;
  local_44 = &LAB_00462fb0;
  local_50 = Ship_Update;
  local_3c = FUN_00464460;
  local_38 = FUN_004645c0;
  local_34 = FUN_004646f0;
  local_54 = &LAB_004647f0;
  local_24 = &LAB_004647c0;
  local_20 = &LAB_004651f0;
  local_2c = &LAB_004653d0;
  local_c = &LAB_00465380;
  local_1c = &LAB_00465500;
  local_28 = FUN_004634c0;
  local_4c = &LAB_00465590;
  local_8 = &LAB_00465630;
  iVar1 = FUN_0041db50(&local_74,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  Ship_LoadDes(param_1,iVar1,param_3);
  FUN_004329d0(s_Descriptor__s_loaded_00532b28,param_1);
  if (param_4 != 0) {
    FUN_004642d0(iVar1,param_3);
  }
  return iVar1;
}

