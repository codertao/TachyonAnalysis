
/* sweep */

void Sparks_Burst(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_20;
  uint local_1c;
  uint local_18;
  vec3 local_14;
  uint local_8;
  
  local_14.x = *param_3;
  local_14.y = param_3[1];
  local_14.z = param_3[2];
  local_8 = (uint)((longlong)param_5 * 0x800) >> 0x10 |
            (int)((ulonglong)((longlong)param_5 * 0x800) >> 0x20) << 0x10;
  uVar2 = global_bad_shift_rng();
  uVar2 = uVar2 % param_4;
  if (uVar2 < 6) {
    uVar2 = 6;
  }
  call_Vec_Normalize(&local_14);
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    uVar3 = global_bad_shift_rng();
    iVar4 = (uVar3 & 0x7fff) + 0x4000;
    uVar3 = global_bad_shift_rng();
    lVar1 = (longlong)((int)(((uVar3 & 0x7fff) - 0x4000) + local_14.x) >> 2) * (longlong)iVar4;
    local_20 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar3 = global_bad_shift_rng();
    lVar1 = (longlong)((int)(((uVar3 & 0x7fff) - 0x4000) + local_14.y) >> 2) * (longlong)iVar4;
    local_1c = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar3 = global_bad_shift_rng();
    lVar1 = (longlong)((int)(((uVar3 & 0x7fff) - 0x4000) + local_14.z) >> 2) * (longlong)iVar4;
    local_18 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    Particle_Spawn(param_2,param_1,param_5,local_8,&local_20,1,0,0,1);
  }
  return;
}

