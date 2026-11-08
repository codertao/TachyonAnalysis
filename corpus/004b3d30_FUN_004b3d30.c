
void FUN_004b3d30(uint *param_1,int param_2)

{
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
      FUN_004b1bb0(&DAT_0055ed00,(vec3 *)(param_1 + 0xd));
      some_rotate_by_global((vec3 *)&INT_0055ecb8,(vec3 *)GLBL_3VEC3_input);
      some_rotate_by_global((vec3 *)&DAT_0055ecc4,(vec3 *)(GLBL_3VEC3_input + 3));
      some_rotate_by_global((vec3 *)&DAT_0055ecd0,(vec3 *)(GLBL_3VEC3_input + 6));
      call_copy_mathresult_to_global(&DAT_00666ac8);
      FUN_004b2410(GLBL_3VEC3_input,GLBL_3VEC3_input);
      FUN_004b2410(0x55ece8,0x55ece8);
      FUN_004b2410(0x55ecf4,0x55ecf4);
    }
    else {
      FUN_004b1bb0(&DAT_0055ed00,(vec3 *)(param_1 + 0xd));
      FUN_0052dc76(&INT_0055ecb8,GLBL_3VEC3_input);
      FUN_0052dc76(&DAT_0055ecc4,0x55ece8);
      FUN_0052dc76(&DAT_0055ecd0,0x55ecf4);
    }
    scale_glbl_3vecs_by_global();
    return;
  }
  GLBL_3VEC3_output[0] = (float)INT_0055ecb8 * f_global_scalar_maybe;
  GLBL_3VEC3_output[4] = (float)INT_0055ecc8 * f_global_scalar_maybe;
  GLBL_3VEC3_output[8] = (float)INT_0055ecd8 * f_global_scalar_maybe;
  return;
}

