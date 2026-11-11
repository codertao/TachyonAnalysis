
void FUN_00423790(int param_1,undefined4 param_2,int *param_3,int param_4,int param_5,uint param_6,
                 int param_7,int param_8,int param_9,undefined4 param_10,undefined4 param_11)

{
  uint uVar1;
  uint uVar2;
  vec3 local_18;
  int local_c;
  int local_8;
  int local_4;
  
  local_18.x = *param_3;
  local_18.y = param_3[1];
  local_18.z = param_3[2];
  uVar1 = global_bad_shift_rng();
  param_4 = uVar1 % (uint)(param_5 - param_4) + param_4;
  if (param_4 == 0) {
    param_4 = 1;
  }
  call_Vec_Normalize(&local_18);
  for (; param_4 != 0; param_4 = param_4 + -1) {
    uVar1 = global_bad_shift_rng();
    local_c = ((int)(((uVar1 & 0x7fff) - 0x4000) + local_18.x) >> 2) * param_9;
    uVar1 = global_bad_shift_rng();
    local_8 = ((int)(((uVar1 & 0x7fff) - 0x4000) + local_18.y) >> 2) * param_9;
    uVar1 = global_bad_shift_rng();
    local_4 = ((int)(((uVar1 & 0x7fff) - 0x4000) + local_18.z) >> 2) * param_9;
    uVar1 = global_bad_shift_rng();
    uVar2 = global_bad_shift_rng();
    Debris_Spawn(param_2,**(undefined4 **)(param_1 + (uVar1 % param_6) * 4),&local_c,0,
                 uVar2 % (uint)(param_8 - param_7) + param_7,&LAB_00420f10,param_11,param_10);
  }
  return;
}

