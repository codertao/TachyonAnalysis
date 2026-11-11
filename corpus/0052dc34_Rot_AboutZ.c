
/* (in@ESI, out@EDI) rotate by angle 2 (0x668fa8/ac) */

void __cdecl Rot_AboutZ(vec3 *in,vec3 *out)

{
  GLBL_MATH_TMPZ_FRAC = in->x;
  out->z = in->z;
  out->x = (int)ROUND((float)in->x * (float)GLBL_fvec3_rotA.z -
                      (float)in->y * (float)GLBL_fvec3_rotA.y);
  out->y = (int)ROUND((float)GLBL_MATH_TMPZ_FRAC * (float)GLBL_fvec3_rotA.y +
                      (float)in->y * (float)GLBL_fvec3_rotA.z);
  return;
}

