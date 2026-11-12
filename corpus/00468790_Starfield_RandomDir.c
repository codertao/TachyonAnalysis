
/* sweep: guess */

void Starfield_RandomDir(vec3 *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2 >> 1;
  uVar2 = global_bad_shift_rng();
  param_1->x = uVar2 % param_2 - uVar3;
  uVar2 = global_bad_shift_rng();
  param_1->y = uVar2 % param_2 - uVar3;
  uVar2 = global_bad_shift_rng();
  param_1->z = uVar2 % param_2 - uVar3;
  call_Vec_NormalizeFast(param_1);
  lVar1 = (longlong)param_1->x * (longlong)(int)param_2;
  param_1->x = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)param_1->y * (longlong)(int)param_2;
  param_1->y = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)param_1->z * (longlong)(int)param_2;
  param_1->z = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  return;
}

