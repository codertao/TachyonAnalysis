
void FUN_0040f5b0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  vec3 local_24;
  float local_18 [6];
  
  local_24.x = 0;
  local_24.y = 0;
  iVar1 = *DAT_005b95e0;
  DAT_005b9648 = param_2;
  DAT_005b9654 = param_2;
  DAT_005b95e8 = param_2;
  DAT_005b9640 = param_1;
  DAT_005b9644 = param_1;
  DAT_005b964c = param_3;
  DAT_005b9650 = param_4;
  DAT_005b9658 = param_3;
  DAT_005b965c = param_4;
  DAT_005b95ec = param_3;
  DAT_005b95f0 = param_4;
  local_24.z = param_1;
  call_Math_SinCos3(local_18,param_2,param_3,param_4);
  call_Rot_SetSinCos(local_18);
  some_rotate_by_global(&local_24,&local_24);
  call_Math_SinCos3(local_18,*(int *)(iVar1 + 0x4c),*(int *)(iVar1 + 0x50),*(int *)(iVar1 + 0x54));
  call_Rot_SetSinCos(local_18);
  some_rotate_by_global(&local_24,&local_24);
  DAT_005b9600 = *(int *)(iVar1 + 0x34) - local_24.x;
  DAT_005b9604 = *(int *)(iVar1 + 0x38) - local_24.y;
  DAT_005b9608 = *(int *)(iVar1 + 0x3c) - local_24.z;
  Vec_DirAngles(&DAT_005b9600,iVar1 + 0x34,&DAT_005b95e8);
  FUN_0040f460(iVar1,&DAT_005b95e8);
  return;
}

