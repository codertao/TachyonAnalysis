
/* per-part matrix: own rot then parents (skip 0x100 parents); 0x40 billboard (no rotation) */

void Part_ComputeTransform(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x28);
  if ((*param_1 & 0x10) == 0) {
    INT_0055ecd8 = 0x10000;
    INT_0055ecb8 = 0x10000;
    INT_0055ecc8 = 0x10000;
  }
  else if ((*param_1 & 0x200) == 0) {
    INT_0055ecb8 = param_1[1];
    INT_0055ecc8 = param_1[1];
    INT_0055ecd8 = param_1[1];
  }
  else {
    INT_0055ecb8 = param_1[1];
    INT_0055ecc8 = param_1[2];
    INT_0055ecd8 = param_1[3];
  }
  if (((*param_1 & 4) == 0) && ((*(uint *)(param_2 + 0x10) & 0x40) == 0)) {
    if (((*param_1 & 0x100) == 0) && ((*(uint *)(param_2 + 0x10) & 0x200) == 0)) {
      call_Math_SinCos3((float *)&DAT_0055ed00,param_1[0xd],param_1[0xe],param_1[0xf]);
      call_Math_SinCos3((float *)(iVar1 + 0x18),-*(int *)(param_2 + 4),-*(int *)(param_2 + 8),
                        -*(int *)(param_2 + 0xc));
      FUN_004b1bb0(iVar1,(vec3 *)(param_2 + 4));
      some_rotate_by_global((vec3 *)&INT_0055ecb8,(vec3 *)GLBL_3VEC3_input);
      some_rotate_by_global((vec3 *)&DAT_0055ecc4,(vec3 *)(GLBL_3VEC3_input + 3));
      some_rotate_by_global((vec3 *)&DAT_0055ecd0,(vec3 *)(GLBL_3VEC3_input + 6));
      for (iVar2 = *(int *)(param_2 + 0x20); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x20)) {
        if ((*(uint *)(iVar2 + 0x10) & 0x100) == 0) {
          FUN_004b1bb0(*(undefined4 *)(iVar2 + 0x28),(vec3 *)(iVar2 + 4));
          some_rotate_by_global((vec3 *)GLBL_3VEC3_input,(vec3 *)GLBL_3VEC3_input);
          some_rotate_by_global((vec3 *)(GLBL_3VEC3_input + 3),(vec3 *)(GLBL_3VEC3_input + 3));
          some_rotate_by_global((vec3 *)(GLBL_3VEC3_input + 6),(vec3 *)(GLBL_3VEC3_input + 6));
        }
      }
      call_Rot_SetSinCos((float *)&DAT_0055ed00);
      some_rotate_by_global((vec3 *)GLBL_3VEC3_input,(vec3 *)GLBL_3VEC3_input);
      some_rotate_by_global((vec3 *)(GLBL_3VEC3_input + 3),(vec3 *)(GLBL_3VEC3_input + 3));
      some_rotate_by_global((vec3 *)(GLBL_3VEC3_input + 6),(vec3 *)(GLBL_3VEC3_input + 6));
      call_Rot_SetSinCos((float *)&DAT_00666ac8);
      FUN_004b2410(GLBL_3VEC3_input,GLBL_3VEC3_input);
      FUN_004b2410(0x55ece8,0x55ece8);
      FUN_004b2410(0x55ecf4,0x55ecf4);
    }
    else {
      call_Math_SinCos3((float *)(iVar1 + 0x18),-*(int *)(param_2 + 4),-*(int *)(param_2 + 8),
                        -*(int *)(param_2 + 0xc));
      FUN_004b1bb0(iVar1,(vec3 *)(param_2 + 4));
      call_Rot_AboutZ((vec3 *)&INT_0055ecb8,(vec3 *)GLBL_3VEC3_input);
      call_Rot_AboutZ((vec3 *)&DAT_0055ecc4,(vec3 *)(GLBL_3VEC3_input + 3));
      call_Rot_AboutZ((vec3 *)&DAT_0055ecd0,(vec3 *)(GLBL_3VEC3_input + 6));
      call_Rot_SetSinCos((float *)&DAT_00666ac8);
      call_Rot_AboutZ((vec3 *)GLBL_3VEC3_input,(vec3 *)GLBL_3VEC3_input);
      call_Rot_AboutZ((vec3 *)(GLBL_3VEC3_input + 3),(vec3 *)(GLBL_3VEC3_input + 3));
      call_Rot_AboutZ((vec3 *)(GLBL_3VEC3_input + 6),(vec3 *)(GLBL_3VEC3_input + 6));
    }
    scale_glbl_3vecs_by_global();
    FUN_004b3eb0(param_2,iVar1 + 0x30);
    return;
  }
  GLBL_3VEC3_output[0] = (float)INT_0055ecb8 * f_global_scalar_maybe;
  GLBL_3VEC3_output[4] = (float)INT_0055ecc8 * f_global_scalar_maybe;
  GLBL_3VEC3_output[8] = (float)INT_0055ecd8 * f_global_scalar_maybe;
  return;
}

