
void some_rotate_by_global(vec3 *fvec,vec3 *fresult_out)

{
  int local_14;
  float initial_rot1;
  float initial_rot2;
  int initial_z;
  
  initial_z = fvec->z;
  initial_rot1 = (float)fvec->x * (float)GLBL_fvec3_rotA.z -
                 (float)fvec->y * (float)GLBL_fvec3_rotA.y;
  initial_rot2 = (float)fvec->x * (float)GLBL_fvec3_rotA.y +
                 (float)fvec->y * (float)GLBL_fvec3_rotA.z;
  local_14 = (int)(longlong)
                  ROUND((float)GLBL_fvec3_rotB.z * (float)initial_z +
                        (float)GLBL_fvec3_rotA.x * initial_rot2);
  fresult_out->y = local_14;
  initial_rot2 = (float)GLBL_fvec3_rotA.x * (float)initial_z -
                 (float)GLBL_fvec3_rotB.z * initial_rot2;
  local_14 = (int)(longlong)
                  ROUND((float)GLBL_fvec3_rotB.y * initial_rot2 -
                        (float)GLBL_fvec3_rotB.x * initial_rot1);
  fresult_out->z = local_14;
  local_14 = (int)(longlong)
                  ROUND((float)GLBL_fvec3_rotB.x * initial_rot2 +
                        (float)GLBL_fvec3_rotB.y * initial_rot1);
  fresult_out->x = local_14;
  return;
}

