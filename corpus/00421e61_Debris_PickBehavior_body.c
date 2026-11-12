
/* sweep: mis-split body */

void Debris_PickBehavior_body(void)

{
  vec3 *v;
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBP;
  
  uVar4 = global_bad_shift_rng();
  iVar1 = *(int *)(unaff_EBP + 8);
  if ((uVar4 & 1) == 0) {
    *(undefined4 *)(iVar1 + 0x104) = DAT_005b216c;
  }
  else {
    *(undefined4 *)(iVar1 + 0x104) = DAT_005b2160;
  }
  iVar5 = global_bad_shift_rng();
  uVar4 = iVar5 * 4 - 0x40000U & 0x40000;
  *(uint *)(iVar1 + 0x108) = uVar4;
  *(undefined4 *)(unaff_EBP + 8) = 0x1000;
  *(uint *)(unaff_EBP + -4) = uVar4;
  lVar3 = (longlong)*(int *)(unaff_EBP + -4) * (longlong)*(int *)(unaff_EBP + 8);
  *(uint *)(iVar1 + 0x124) = (uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10;
  Model_RandomPoint(*(undefined4 *)(iVar1 + 0x104),(int *)(iVar1 + 0x118));
  uVar2 = *(undefined4 *)(iVar1 + 0x11c);
  v = (vec3 *)(iVar1 + 0x10c);
  v->x = *(int *)(iVar1 + 0x118);
  *(undefined4 *)(iVar1 + 0x110) = uVar2;
  *(undefined4 *)(iVar1 + 0x114) = *(undefined4 *)(iVar1 + 0x120);
  call_Vec_Normalize(v);
  iVar5 = v->x;
  *(int *)(iVar1 + 0x110) = *(int *)(iVar1 + 0x110) >> 2;
  *(int *)(iVar1 + 0x114) = *(int *)(iVar1 + 0x114) >> 2;
  v->x = iVar5 >> 2;
  return;
}

