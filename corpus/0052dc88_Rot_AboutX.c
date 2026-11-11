
/* (in@ESI, out@EDI) rotate by angle 1 (0x668fa0/a4) */

void __cdecl Rot_AboutX(vec3 *in,vec3 *out)

{
  GLBL_MATH_TMPZ_FRAC = in->z;
  out->x = in->x;
  out->z = (int)ROUND((float)in->z * (float)GLBL_fvec3_rotA.x -
                      (float)in->y * (float)GLBL_fvec3_rotB.z);
  out->y = (int)ROUND((float)GLBL_MATH_TMPZ_FRAC * (float)GLBL_fvec3_rotB.z +
                      (float)in->y * (float)GLBL_fvec3_rotA.x);
  return;
}

