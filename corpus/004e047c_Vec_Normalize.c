
/* (v@EAX) exact: divide by approx_vector_len, 16.16 */

void __cdecl Vec_Normalize(vec3 *v)

{
  int iVar1;
  
  iVar1 = approx_vector_len();
  v->x = (int)(CONCAT44(v->x >> 0x10,v->x << 0x10) / (longlong)iVar1);
  v->y = (int)(CONCAT44(v->y >> 0x10,v->y << 0x10) / (longlong)iVar1);
  v->z = (int)(CONCAT44(v->z >> 0x10,v->z << 0x10) / (longlong)iVar1);
  return;
}

