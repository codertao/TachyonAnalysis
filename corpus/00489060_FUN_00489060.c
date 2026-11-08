
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00489060(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  undefined1 local_6c [108];
  
  iVar1 = FUN_00489540(param_1);
  if ((iVar1 != 0) && (iVar2 = Cbin_LoadFile(param_2,local_6c), iVar2 != 0)) {
    local_80 = 0.0;
    local_8c = 0.0;
    local_84 = 0.0;
    local_88 = 0.0;
    local_94 = 0.0;
    local_90 = 0.0;
    Cbin_GetParam_Ctx(s_SPEED_0053696c,s_MAX_SPEED_00545d14,0,0,&local_8c,2,1,local_6c);
    Cbin_GetParam_Ctx(s_SPEED_0053696c,s_ACCELERATION_00545d04,0,0,&local_84,2,1,local_6c);
    Cbin_GetParam_Ctx(&DAT_005334f4,s_DAMAGE_00533fd8,0,0,&local_88,2,1,local_6c);
    Cbin_GetParam_Ctx(s_SHIELDS_005369a8,s_MAX_ENERGY_00545cf8,0,0,&local_94,2,1,local_6c);
    Cbin_GetParam_Ctx(s_ENERGY_00545ce0,s_LASER_ENERGY_00545ce8,0,0,&local_90,2,1,local_6c);
    Cbin_GetParam_Ctx(s_ROTATION_00545ca0,s_MAX_YAW_RATE_00545cac,0,0,&local_a4,2,1,local_6c);
    Cbin_GetParam_Ctx(s_ROTATION_00545ca0,s_MAX_PITCH_RATE_00545c90,0,0,&local_98,2,1,local_6c);
    Cbin_GetParam_Ctx(s_ROTATION_00545ca0,s_MAX_ROLL_RATE_00545c80,0,0,&local_9c,2,1,local_6c);
    local_70 = (local_9c + local_98 + local_a4) * _DAT_0052e99c;
    FUN_0049adb0(local_6c);
    *(undefined4 *)(iVar1 + 0x94) = 0x32;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    iVar2 = str_cmp(param_1,s_SPEED_0053696c);
    if (iVar2 == 0) {
      FUN_00488f70(s_SPEED_0053696c,s_MAX_SPEED_00545d14,&local_a4,&local_a0);
      local_80 = local_8c;
    }
    else {
      iVar2 = str_cmp(param_1,&DAT_005334f4);
      if (iVar2 == 0) {
        FUN_00488f70(&DAT_005334f4,s_DAMAGE_00533fd8,&local_a4,&local_a0);
        local_80 = local_88;
      }
      else {
        iVar2 = str_cmp(param_1,s_SHIELD_00536a18);
        if (iVar2 == 0) {
          FUN_00488f70(s_SHIELDS_005369a8,s_MAX_ENERGY_00545cf8,&local_a4,&local_a0);
          local_80 = local_94;
        }
        else {
          iVar2 = str_cmp(param_1,s_ENERGY_00545ce0);
          if (iVar2 == 0) {
            FUN_00488f70(s_ENERGY_00545ce0,s_LASER_ENERGY_00545ce8,&local_a4,&local_a0);
            local_80 = local_90;
          }
          else {
            iVar2 = str_cmp(param_1,s_AGILITY_00545c78);
            if (iVar2 == 0) {
              FUN_00488f70(s_ROTATION_00545ca0,s_MAX_YAW_RATE_00545cac,&local_a4,&local_a0);
              FUN_00488f70(s_ROTATION_00545ca0,s_MAX_PITCH_RATE_00545c90,&local_98,&local_74);
              FUN_00488f70(s_ROTATION_00545ca0,s_MAX_ROLL_RATE_00545c80,&local_9c,&local_78);
              local_a4 = (local_9c + local_98 + local_a4) * _DAT_0052e99c;
              local_a0 = (local_78 + local_74 + local_a0) * _DAT_0052e99c;
              local_80 = local_70;
            }
            else {
              iVar2 = str_cmp(param_1,s_ACCEL_00545c70);
              if (iVar2 == 0) {
                FUN_00488f70(s_SPEED_0053696c,s_ACCELERATION_00545d04,&local_a4,&local_a0);
                local_80 = local_84;
              }
            }
          }
        }
      }
    }
    local_a4 = local_a4 - local_a0;
    if (local_a4 <= _DAT_0052e598) {
      local_a4 = 1.0;
    }
    *(float *)(iVar1 + 0x88) = (local_80 - local_a0) / local_a4;
    if (local_80 - local_a0 == _DAT_0052e598) {
      *(undefined4 *)(iVar1 + 0x88) = 0x3d4ccccd;
    }
    *(float *)(iVar1 + 0x90) = *(float *)(iVar1 + 0x88) / (float)*(uint *)(iVar1 + 0x94);
  }
  return;
}

