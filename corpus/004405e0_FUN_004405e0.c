
void FUN_004405e0(uint param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,uint param_6
                 ,uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
                 undefined4 param_12,int param_13,undefined4 param_14,undefined4 param_15)

{
  int iVar1;
  uint *puVar2;
  float10 fVar3;
  int local_e0;
  uint local_d4 [4];
  uint local_c4;
  uint local_c0;
  uint local_bc;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  float local_64;
  int local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [64];
  undefined4 local_8;
  
  puVar2 = local_d4;
  for (iVar1 = 0x35; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (param_2 != 0) {
    str_sprintf(local_48,param_3);
    local_8 = param_15;
    local_a8 = param_13 + 1;
    local_d4[0] = param_1;
    local_50 = param_14;
    local_b0 = param_12;
    local_ac = param_12;
    local_5c = param_2;
    local_e0 = *(int *)(param_2 + 0x1684);
    local_d4[1] = param_4;
    local_d4[2] = param_5;
    local_74 = param_9;
    local_58 = 1;
    local_d4[3] = param_6;
    local_c4 = param_7;
    local_c0 = param_6;
    local_bc = param_7;
    local_78 = param_8;
    local_80 = param_10;
    local_7c = param_11;
    local_70 = param_10;
    local_6c = param_11;
    if (local_e0 == 0) {
      local_e0 = 0xff;
    }
    local_88 = (float)local_a8;
    local_64 = (float)local_e0 / local_88;
    if (param_10 < param_8) {
      local_90 = ((float)param_6 - (float)(int)param_4) / local_88;
      local_8c = ((float)param_7 - (float)(int)param_5) / local_88;
      local_88 = ((float)(param_4 + param_8) - (float)(int)(param_6 + param_10)) / local_88;
      fVar3 = ((float10)param_9 - (float10)((param_7 - param_5) + param_11)) / (float10)local_a8;
      local_98 = (float)param_10 / (float)(int)param_8;
      local_94 = (float)((float10)param_11 / (float10)param_9);
    }
    else {
      local_4c = 1;
      local_98 = 1.0;
      local_94 = 1.0;
      local_90 = (float)(((float10)param_6 - (float10)param_4) / (float10)local_a8);
      local_88 = (float)((((float10)param_8 + (float10)param_4) - (float10)(int)param_10) /
                        (float10)local_a8);
      local_8c = (float)(((float10)param_7 - (float10)param_5) / (float10)local_a8);
      fVar3 = (((float10)param_9 + (float10)param_5) - (float10)(int)param_11) / (float10)local_a8;
    }
    local_84 = (float)fVar3;
    local_a4 = local_a8;
    FUN_00440c00(local_d4);
  }
  return;
}

