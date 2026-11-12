
/* sweep */

void Hud_DrawOffscreenArrow
               (int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_ec [20];
  undefined4 local_d8;
  undefined1 local_d4 [8];
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [20];
  undefined4 local_ac;
  undefined1 local_a8 [8];
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined1 local_94 [20];
  undefined4 local_80;
  undefined1 local_7c [8];
  int local_74;
  int local_70;
  undefined4 local_6c;
  float local_68 [6];
  int local_50;
  int local_4c;
  int local_48;
  vec3 local_44;
  int local_38;
  int local_34;
  undefined4 local_30;
  vec3 local_2c;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(int *)(param_1 + 0x628) != 0) && (param_2 != 0)) {
    local_38 = DAT_005b95e8;
    local_34 = DAT_005b95ec;
    local_30 = DAT_005b95f0;
    if (DAT_005b0744 != 0) {
      uVar1 = global_bad_shift_rng();
      local_38 = local_38 + ((int)(((uVar1 & 0x7fffff) - 0x400000) * DAT_005b0750) >> 8);
      uVar1 = global_bad_shift_rng();
      local_34 = local_34 + ((int)(((uVar1 & 0x7fffff) - 0x400000) * DAT_005b0750) >> 8);
    }
    Ent_GetBracketPoint(param_2,&local_50);
    Rot_FromAnglesInv(local_68,&local_38);
    local_20 = local_50 - *(int *)(GLBL_SOME_CONTEXT + 0x34);
    local_1c = local_4c - *(int *)(GLBL_SOME_CONTEXT + 0x38);
    local_18 = local_48 - *(int *)(GLBL_SOME_CONTEXT + 0x3c);
    Rot_ApplyCurrent(&local_20,&local_20);
    uVar1 = local_18;
    local_18 = (local_18 ^ (int)local_18 >> 0x1f) - ((int)local_18 >> 0x1f);
    if ((int)local_18 < 0x2000) {
      local_18 = 0x2000;
    }
    View_ProjectPointFixed(&local_20,&local_c);
    local_14 = DAT_005a67d4;
    local_10 = DAT_005a67d8;
    uVar2 = (uint)((longlong)param_4 * (longlong)DAT_005a67e4) >> 0x10 |
            (int)((ulonglong)((longlong)param_4 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
    if ((-1 < (int)uVar1) && (uVar1 = Vec_LengthFast(&local_14,&local_c), uVar1 < uVar2 << 7)) {
      return;
    }
    local_2c.x = local_c - local_14;
    local_2c.y = local_8 - local_10;
    local_2c.z = 0;
    call_Vec_NormalizeFast(&local_2c);
    call_Math_SinCos3(local_68,0,0,0x800000);
    call_Rot_SetSinCos(local_68);
    call_Rot_AboutZ(&local_2c,&local_44);
    local_c = (((uint)((longlong)local_2c.x * (longlong)(int)uVar2) >> 0x10 |
               (int)((ulonglong)((longlong)local_2c.x * (longlong)(int)uVar2) >> 0x20) << 0x10) +
              DAT_005a67dc) * 0x80;
    local_8 = (((uint)((longlong)local_2c.y * (longlong)(int)uVar2) >> 0x10 |
               (int)((ulonglong)((longlong)local_2c.y * (longlong)(int)uVar2) >> 0x20) << 0x10) +
              DAT_005a67e0) * 0x80;
    uVar1 = (uint)((longlong)param_3 * 0x700) >> 0x10 |
            (int)((ulonglong)((longlong)param_3 * 0x700) >> 0x20) << 0x10;
    uVar2 = (uint)((longlong)param_3 * 0x700) >> 0x10 |
            (int)((ulonglong)((longlong)param_3 * 0x700) >> 0x20) << 0x10;
    Hud_ScaleRect(local_d4,&local_c,-uVar1,uVar2,&local_44,&local_2c);
    local_c4 = 0xffff00;
    local_d8 = 0x10000;
    iVar4 = -uVar2;
    local_cc = *(int *)(param_1 + 0x634) <<
               (0x10U - *(char *)(*(int *)(param_1 + 0x628) + 8) & 0x1f);
    local_c8 = *(int *)(param_1 + 0x638) <<
               (0x10U - *(char *)(*(int *)(param_1 + 0x628) + 9) & 0x1f);
    Hud_ScaleRect(local_7c,&local_c,-uVar1,iVar4,&local_44,&local_2c);
    local_6c = 0xffff00;
    local_80 = 0x10000;
    local_74 = *(int *)(param_1 + 0x634) <<
               (0x10U - *(char *)(*(int *)(param_1 + 0x628) + 8) & 0x1f);
    local_70 = *(int *)(param_1 + 0x640) + *(int *)(param_1 + 0x638) <<
               (0x10U - *(char *)(*(int *)(param_1 + 0x628) + 9) & 0x1f);
    Hud_ScaleRect(local_a8,&local_c,uVar1,iVar4,&local_44,&local_2c);
    iVar4 = *(int *)(param_1 + 0x628);
    local_98 = 0xffff00;
    local_ac = 0x10000;
    local_a0 = *(int *)(param_1 + 0x634) + *(int *)(param_1 + 0x63c) <<
               (0x10U - *(char *)(iVar4 + 8) & 0x1f);
    local_9c = *(int *)(param_1 + 0x640) + *(int *)(param_1 + 0x638) <<
               (0x10U - *(char *)(iVar4 + 9) & 0x1f);
    if (param_6 == 0) {
      uVar3 = Ent_GetIffColorEx(param_2,param_5);
      *(undefined4 *)(*(int *)(param_1 + 0x628) + 4) = uVar3;
      param_6 = *(int *)(*(int *)(param_1 + 0x628) + 4);
    }
    else {
      *(int *)(iVar4 + 4) = param_6;
    }
    DAT_004e4a28 = *(undefined4 *)(*(int *)(param_1 + 0x628) + 0xc);
    DAT_004e4adc = (uint)*(byte *)(*(int *)(param_1 + 0x628) + 8);
    DAT_004e4ae0 = (uint)*(byte *)(*(int *)(param_1 + 0x628) + 9);
    DAT_004e4a2c = param_6;
    Gfx_Lock(1);
    Gfx_DrawTriangleFlags
              (local_ec,local_94,local_c0,DAT_005a680c,*(undefined4 *)(param_1 + 0x628),DAT_004e4a28
              );
    Hud_ScaleRect(local_7c,&local_c,uVar1,uVar1,&local_44,&local_2c);
    iVar4 = *(int *)(param_1 + 0x628);
    local_74 = *(int *)(param_1 + 0x634) + *(int *)(param_1 + 0x63c) <<
               (0x10U - *(char *)(iVar4 + 8) & 0x1f);
    local_70 = *(int *)(param_1 + 0x638) << (0x10U - *(char *)(iVar4 + 9) & 0x1f);
    Gfx_DrawTriangleFlags(local_94,local_ec,local_c0,DAT_005a680c,iVar4,DAT_004e4a28);
  }
  return;
}

