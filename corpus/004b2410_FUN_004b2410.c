
void FUN_004b2410(int *param_1,undefined4 *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 local_14;
  
  iVar1 = param_1[1];
  fVar2 = (float)param_1[2] * (float)GLBL_fvec3_rotB.y - (float)*param_1 * (float)GLBL_fvec3_rotB.x;
  fVar3 = (float)param_1[2] * (float)GLBL_fvec3_rotB.x + (float)*param_1 * (float)GLBL_fvec3_rotB.y;
  local_14 = (undefined4)
             (longlong)
             ROUND((float)GLBL_fvec3_rotA.x * fVar2 - (float)GLBL_fvec3_rotB.z * (float)iVar1);
  param_2[2] = local_14;
  fVar2 = (float)GLBL_fvec3_rotA.x * (float)iVar1 + (float)GLBL_fvec3_rotB.z * fVar2;
  local_14 = (undefined4)
             (longlong)ROUND((float)GLBL_fvec3_rotA.z * fVar3 - (float)GLBL_fvec3_rotA.y * fVar2);
  *param_2 = local_14;
  local_14 = (undefined4)
             (longlong)ROUND((float)GLBL_fvec3_rotA.z * fVar2 + (float)GLBL_fvec3_rotA.y * fVar3);
  param_2[1] = local_14;
  return;
}

