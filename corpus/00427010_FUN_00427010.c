
int FUN_00427010(undefined4 param_1,undefined4 param_2,vec3 *param_3,undefined2 *param_4,int param_5
                )

{
  undefined4 uVar1;
  int iVar2;
  vec3 local_24;
  float local_18 [6];
  
  uVar1 = 0xffffffff;
  local_24.x = 0;
  local_24.y = 0;
  local_24.z = (int)&DAT_00640000;
  if (param_5 != 0) {
    uVar1 = *(undefined4 *)(param_5 + 100);
  }
  iVar2 = FUN_00426f90(param_1,param_2,uVar1);
  if (iVar2 == 0) {
    clr_bytes(param_3,0xc);
    return 0;
  }
  FUN_004263a0(iVar2);
  FUN_00426370(iVar2);
  call_Math_SinCos3(local_18,*(int *)(iVar2 + 0x4c),*(int *)(iVar2 + 0x50),*(int *)(iVar2 + 0x54));
  call_Rot_SetSinCos(local_18);
  some_rotate_by_global(&local_24,param_3);
  param_3->x = param_3->x + *(int *)(iVar2 + 0x34);
  param_3->y = param_3->y + *(int *)(iVar2 + 0x38);
  param_3->z = param_3->z + *(int *)(iVar2 + 0x3c);
  *param_4 = (short)((uint)*(undefined4 *)(iVar2 + 0x4c) >> 0x10);
  param_4[1] = (short)((uint)*(undefined4 *)(iVar2 + 0x50) >> 0x10);
  param_4[2] = 0;
  return iVar2;
}

