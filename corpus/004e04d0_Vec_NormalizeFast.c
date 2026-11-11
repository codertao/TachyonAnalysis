
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (v@EAX) float, reciprocal-sqrt approximation from exponent halving + table 0x4dffb0 */

void __cdecl Vec_NormalizeFast(vec3 *v)

{
  float fVar1;
  
  fVar1 = (float)v->z * (float)v->z + (float)v->x * (float)v->x + (float)v->y * (float)v->y;
  DAT_004dff7c = (float)(((int)((uint)fVar1 & 0x7f800000) >> 1) + 0x1fc00000U & 0x7f800000 |
                        *(uint *)(&DAT_004dffb0 + ((int)fVar1 >> 0x10 & 0xffU) * 4));
  fVar1 = _DAT_004dff78 / DAT_004dff7c;
  v->x = (int)ROUND((float)v->x * fVar1);
  v->z = (int)ROUND((float)v->z * fVar1);
  v->y = (int)ROUND((float)v->y * fVar1);
  return;
}

