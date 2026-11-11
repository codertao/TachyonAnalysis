
void __thiscall FUN_00421e40(undefined4 param_1,int param_2)

{
  vec3 *v;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  bVar2 = global_bad_shift_rng(param_1);
  if ((bVar2 & 0xf) < 6) {
    *(undefined4 *)(param_2 + 0x104) = 0;
    return;
  }
  uVar3 = global_bad_shift_rng();
  if ((uVar3 & 1) == 0) {
    *(undefined4 *)(param_2 + 0x104) = DAT_005b216c;
  }
  else {
    *(undefined4 *)(param_2 + 0x104) = DAT_005b2160;
  }
  iVar4 = global_bad_shift_rng();
  uVar3 = iVar4 * 4 - 0x40000U & 0x40000;
  *(uint *)(param_2 + 0x108) = uVar3;
  *(uint *)(param_2 + 0x124) = uVar3 >> 4;
  FUN_0048ecf0(*(undefined4 *)(param_2 + 0x104),(int *)(param_2 + 0x118));
  uVar1 = *(undefined4 *)(param_2 + 0x11c);
  v = (vec3 *)(param_2 + 0x10c);
  v->x = *(int *)(param_2 + 0x118);
  *(undefined4 *)(param_2 + 0x110) = uVar1;
  *(undefined4 *)(param_2 + 0x114) = *(undefined4 *)(param_2 + 0x120);
  call_Vec_Normalize(v);
  iVar4 = v->x;
  *(int *)(param_2 + 0x110) = *(int *)(param_2 + 0x110) >> 2;
  *(int *)(param_2 + 0x114) = *(int *)(param_2 + 0x114) >> 2;
  v->x = iVar4 >> 2;
  return;
}

