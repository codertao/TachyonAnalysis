
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void ShipStat_Load(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  undefined4 uStack_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined1 local_6c [108];
  
  iVar1 = ShipStat_Find(param_1,param_2);
  if ((iVar1 != 0) && (iVar2 = Cbin_LoadFile(param_3,local_6c), iVar2 != 0)) {
    local_88 = 0.0;
    local_98 = 0.0;
    local_9c = 0.0;
    local_90 = 0.0;
    local_94 = 0.0;
    local_a0 = 0.0;
    local_8c = 0.0;
    Cbin_GetParam_Ctx(s_SPEED_0053696c,s_MAX_SPEED_00545d14,0,0,&local_98,2,1,local_6c);
    Cbin_GetParam_Ctx(s_SPEED_0053696c,s_ACCELERATION_00545d04,0,0,&local_9c,2,1,local_6c);
    Cbin_GetParam_Ctx(&DAT_005334f4,s_DAMAGE_00533fd8,0,0,&local_90,2,1,local_6c);
    Cbin_GetParam_Ctx(s_SHIELDS_005369a8,s_MAX_ENERGY_00545cf8,0,0,&local_94,2,1,local_6c);
    Cbin_GetParam_Ctx(s_ENERGY_00545ce0,s_LASER_ENERGY_00545ce8,0,0,&local_a0,2,1,local_6c);
    Cbin_GetParam_Ctx(&DAT_00535990,s_MAX_HOLD_CREDITS_00545ccc,0,0,&local_8c,2,1,local_6c);
    uVar3 = Cbin_CountIndexedFrom(s_CARD_MOUNT__d_00545cbc,local_6c,1);
    uStack_7c = 0;
    local_80 = (float)uVar3;
    Cbin_GetParam_Ctx(s_ROTATION_00545ca0,s_MAX_YAW_RATE_00545cac,0,0,&local_b0,2,1,local_6c);
    Cbin_GetParam_Ctx(s_ROTATION_00545ca0,s_MAX_PITCH_RATE_00545c90,0,0,&local_a4,2,1,local_6c);
    Cbin_GetParam_Ctx(s_ROTATION_00545ca0,s_MAX_ROLL_RATE_00545c80,0,0,&local_a8,2,1,local_6c);
    local_74 = (local_a8 + local_a4 + local_b0) * _DAT_0052e99c;
    Cbin_Free(local_6c);
    *(undefined4 *)(iVar1 + 0x94) = 0x32;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    iVar2 = __stricmp(param_2,s_SPEED_0053696c);
    if (iVar2 == 0) {
      ShipStat_FindMax(s_SPEED_0053696c,s_MAX_SPEED_00545d14,&local_b0,&local_ac,0);
      local_88 = local_98;
    }
    else {
      iVar2 = __stricmp(param_2,&DAT_005334f4);
      if (iVar2 == 0) {
        ShipStat_FindMax(&DAT_005334f4,s_DAMAGE_00533fd8,&local_b0,&local_ac,0);
        local_88 = local_90;
      }
      else {
        iVar2 = __stricmp(param_2,s_SHIELD_00536a18);
        if (iVar2 == 0) {
          ShipStat_FindMax(s_SHIELDS_005369a8,s_MAX_ENERGY_00545cf8,&local_b0,&local_ac,0);
          local_88 = local_94;
        }
        else {
          iVar2 = __stricmp(param_2,s_ENERGY_00545ce0);
          if (iVar2 == 0) {
            ShipStat_FindMax(s_ENERGY_00545ce0,s_LASER_ENERGY_00545ce8,&local_b0,&local_ac,0);
            local_88 = local_a0;
          }
          else {
            iVar2 = __stricmp(param_2,s_AGILITY_00545c78);
            if (iVar2 == 0) {
              ShipStat_FindMax(s_ROTATION_00545ca0,s_MAX_YAW_RATE_00545cac,&local_b0,&local_ac,0);
              ShipStat_FindMax(s_ROTATION_00545ca0,s_MAX_PITCH_RATE_00545c90,&local_a4,&local_70,0);
              ShipStat_FindMax(s_ROTATION_00545ca0,s_MAX_ROLL_RATE_00545c80,&local_a8,&local_78,0);
              local_b0 = (local_a8 + local_a4 + local_b0) * _DAT_0052e99c;
              local_ac = (local_78 + local_70 + local_ac) * _DAT_0052e99c;
              local_88 = local_74;
            }
            else {
              iVar2 = __stricmp(param_2,s_ACCEL_00545c70);
              if (iVar2 == 0) {
                ShipStat_FindMax(s_SPEED_0053696c,s_ACCELERATION_00545d04,&local_b0,&local_ac,0);
                local_88 = local_b0 - (local_9c - local_ac);
              }
              else {
                iVar2 = __stricmp(param_2,s_CARGO_00533fe8);
                if (iVar2 == 0) {
                  ShipStat_FindMax(&DAT_00535990,s_MAX_HOLD_CREDITS_00545ccc,&local_b0,&local_ac,0);
                  local_88 = local_8c;
                }
                else {
                  iVar2 = __stricmp(param_2,&PTR_DAT_00545c6c);
                  if (iVar2 == 0) {
                    ShipStat_FindMax(&DAT_00562b14,&DAT_00562b14,&local_b0,&local_ac,
                                     s_CARD_MOUNT__d_00545cbc);
                    local_88 = local_80;
                  }
                }
              }
            }
          }
        }
      }
    }
    local_b0 = local_b0 - local_ac;
    if (local_b0 <= _DAT_0052e598) {
      local_b0 = 1.0;
    }
    *(float *)(iVar1 + 0x88) = (local_88 - local_ac) / local_b0;
    if (local_88 - local_ac == _DAT_0052e598) {
      *(undefined4 *)(iVar1 + 0x88) = 0x3d4ccccd;
    }
    *(float *)(iVar1 + 0x90) = *(float *)(iVar1 + 0x88) / (float)*(uint *)(iVar1 + 0x94);
  }
  return;
}

