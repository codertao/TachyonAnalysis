
void FUN_00494db0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  vec3 *pvVar1;
  vec3 *fvec;
  int iVar2;
  int iVar3;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  Vec_DirAngles(param_1 + 0x34,param_2,&local_24);
  FUN_0040f3f0(param_3,&local_24);
  pvVar1 = (vec3 *)(param_1 + 0x4c);
  DAT_005656bc = local_24 * 0x80 + *(int *)(param_1 + 0x4c) * -0x80 >> 7;
  iVar2 = param_5;
  if ((DAT_005656bc <= param_5) && (iVar2 = DAT_005656bc, DAT_005656bc < -param_5)) {
    iVar2 = -param_5;
  }
  pvVar1->x = pvVar1->x + iVar2;
  DAT_005656c0 = local_20 * 0x80 + *(int *)(param_1 + 0x50) * -0x80 >> 7;
  iVar2 = param_5;
  if ((param_5 < DAT_005656c0) || (iVar3 = DAT_005656c0, iVar2 = -param_5, DAT_005656c0 < -param_5))
  {
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar3;
  fvec = (vec3 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x54) = local_1c;
  fvec->x = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = param_4;
  FUN_004b1bb0(local_18,pvVar1);
  some_rotate_by_global(fvec,fvec);
  return;
}

