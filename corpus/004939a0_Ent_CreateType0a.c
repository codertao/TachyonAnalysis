
/* DESC_TYPE 0xa (unnamed) */

void Ent_CreateType0a(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 *local_64;
  undefined1 *local_60;
  undefined4 local_3c;
  undefined1 *local_38;
  code *local_34;
  undefined4 local_2c;
  undefined4 local_20;
  undefined1 *local_18;
  undefined1 *local_10;
  undefined1 *local_8;
  
  iVar1 = DescReg_FindByName(param_1,0);
  if (iVar1 == 0) {
    clr_bytes(&local_74,0x74);
    local_70 = 10;
    local_6c = 0x84;
    local_68 = 0xffff;
    local_74 = s_weapon_desc_0055d4fc;
    local_64 = &LAB_00493860;
    local_60 = &LAB_00493820;
    local_3c = 0;
    local_38 = &LAB_00493880;
    local_34 = FUN_00445720;
    local_20 = 0;
    local_2c = 0;
    local_18 = &LAB_004938b0;
    local_10 = &LAB_004938c0;
    local_8 = &LAB_00493980;
    DescReg_Alloc(&local_74,param_2);
  }
  return;
}

