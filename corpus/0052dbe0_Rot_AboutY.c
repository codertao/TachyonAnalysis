
/* (in@ESI, out@EDI) rotate by angle 0 of the current rotation (0x668f98/9c) */

void __cdecl Rot_AboutY(vec3 *in,vec3 *out)

{
  GLBL_MATH_TMPZ_FRAC = in->z;
  out->y = in->y;
  out->z = (int)ROUND((float)in->z * (float)GLBL_fvec3_rotB.y -
                      (float)in->x * (float)GLBL_fvec3_rotB.x);
  out->x = (int)ROUND((float)GLBL_MATH_TMPZ_FRAC * (float)GLBL_fvec3_rotB.x +
                      (float)in->x * (float)GLBL_fvec3_rotB.y);
  return;
}

