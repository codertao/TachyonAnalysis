
void FUN_00408580(int *param_1,undefined4 param_2)

{
  float *pfVar1;
  longlong lVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_114 [20];
  undefined4 local_100;
  int local_fc;
  int local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined1 local_d8 [20];
  undefined4 local_c4;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c [5];
  undefined4 local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60 [5];
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined8 local_1c;
  int local_14;
  int local_10;
  undefined8 local_c;
  
  piVar4 = param_1;
  clr_bytes(local_d8,0x3c);
  clr_bytes(local_60,0x3c);
  clr_bytes(local_9c,0x3c);
  clr_bytes(local_114,0x3c);
  local_c4 = 0x10000;
  local_4c = 0x10000;
  local_88 = 0x10000;
  local_100 = 0x10000;
  local_ec = param_1[0xc];
  iVar6 = param_1[5] - param_1[3];
  local_a0 = param_1[4];
  local_a4 = param_1[3] + (iVar6 >> 1);
  lVar2 = (longlong)((iVar6 - local_a4) - param_1[8]) * (longlong)DAT_005a67e4;
  local_ac = *param_1 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  lVar2 = (longlong)(local_a0 - param_1[9]) * (longlong)DAT_005a67e4;
  local_a8 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) + param_1[1];
  local_bc = local_a8 * 0x80;
  local_c0 = local_ac * 0x80;
  local_1c._0_4_ = (int)(longlong)ROUND((float)(iVar6 - local_a4) * (float)param_1[0xd]);
  local_b8 = (int)local_1c;
  local_1c._0_4_ = (int)(longlong)ROUND((float)local_a0 * (float)param_1[0xe]);
  local_b4 = (int)local_1c;
  local_2c = param_1[3];
  local_28 = param_1[4];
  lVar2 = (longlong)((iVar6 - local_2c) - param_1[8]) * (longlong)DAT_005a67e4;
  local_34 = *param_1 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  lVar2 = (longlong)(local_28 - param_1[9]) * (longlong)DAT_005a67e4;
  local_30 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) + param_1[1];
  local_48 = local_34 * 0x80;
  local_44 = local_30 * 0x80;
  local_20 = (param_1[6] - local_a0 >> 1) * 2;
  local_c = (ulonglong)(uint)local_c;
  pfVar1 = (float *)(param_1 + 0xd);
  param_1 = (int *)0xffffff9c;
  local_1c._0_4_ = (int)(longlong)ROUND((float)(iVar6 - local_2c) * *pfVar1);
  local_40 = (int)local_1c;
  local_24 = (iVar6 >> 1) * 2;
  local_1c = (longlong)ROUND((float)local_28 * (float)piVar4[0xe]);
  local_3c = (int)local_1c;
  local_b0 = local_ec;
  local_74 = local_ec;
  local_38 = local_ec;
  do {
    if (piVar4[2] < (int)param_1) {
      param_1 = (int *)piVar4[2];
    }
    iVar5 = FUN_004083d0(param_1,piVar4[7],piVar4 + 3,local_24,local_20,&local_14,0);
    if (iVar5 == 0) {
      iVar5 = piVar4[2];
    }
    else {
      bVar3 = false;
      if (local_c._4_4_ != 0) {
        if (((local_2c == piVar4[3]) || (local_2c == local_24)) && (local_14 != local_2c)) {
          local_1c = CONCAT44(local_10,local_2c);
          bVar3 = true;
        }
        if (((local_28 == piVar4[3]) || (local_28 == local_20)) && (local_10 != local_28)) {
          local_1c = CONCAT44(local_28,local_14);
          bVar3 = true;
        }
      }
      local_64 = local_10;
      local_68 = local_14;
      lVar2 = (longlong)((iVar6 - local_14) - piVar4[8]) * (longlong)DAT_005a67e4;
      local_70 = *piVar4 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
      lVar2 = (longlong)(local_10 - piVar4[9]) * (longlong)DAT_005a67e4;
      local_6c = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) + piVar4[1];
      local_84 = local_70 * 0x80;
      local_80 = local_6c * 0x80;
      local_c._0_4_ = (uint)(longlong)ROUND((float)(iVar6 - local_14) * (float)piVar4[0xd]);
      local_7c = (uint)local_c;
      local_c = (ulonglong)ROUND((float)local_10 * (float)piVar4[0xe]);
      local_78 = (uint)local_c;
      FUN_004ac210(local_9c,local_60,local_d8,param_2,piVar4[10]);
      if (bVar3) {
        local_e0 = (int)local_1c;
        local_dc = local_1c._4_4_;
        lVar2 = (longlong)((iVar6 - (int)local_1c) - piVar4[8]) * (longlong)DAT_005a67e4;
        local_e8 = *piVar4 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
        lVar2 = (longlong)(local_1c._4_4_ - piVar4[9]) * (longlong)DAT_005a67e4;
        local_e4 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) + piVar4[1];
        local_fc = local_e8 * 0x80;
        local_f8 = local_e4 * 0x80;
        local_c._0_4_ = (uint)(longlong)ROUND((float)(iVar6 - (int)local_1c) * (float)piVar4[0xd]);
        local_f4 = (uint)local_c;
        local_c = (ulonglong)ROUND((float)local_1c._4_4_ * (float)piVar4[0xe]);
        local_f0 = (uint)local_c;
        FUN_004ac210(local_9c,local_60,local_114,param_2,piVar4[10]);
      }
      puVar7 = local_9c;
      puVar8 = local_60;
      for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      iVar5 = piVar4[2];
      local_c = CONCAT44(1,(uint)local_c);
    }
  } while ((param_1 != (int *)iVar5) &&
          (param_1 = (int *)((int)param_1 + 0x1c), (int)param_1 < 0x81));
  return;
}

