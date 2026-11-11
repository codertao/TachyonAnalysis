
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (v@ESI, outXY@EDI) perspective: z clamped to near 0x666ae4, x*focal/z + cx, -y*focal/z + cy
   (focal 0x604470, centre 0x604474/78) */

void __cdecl Vec_ProjectToScreen(vec3 *v,int *outXY)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = v->z;
  if (v->z < GLBL_R_DIST_MIN_VAL) {
    iVar2 = GLBL_R_DIST_MIN_VAL;
  }
  iVar2 = (int)((longlong)((ulonglong)DAT_00604470 << 0x20) / (longlong)iVar2);
  lVar1 = (longlong)v->x * (longlong)iVar2;
  *outXY = ((int)((ulonglong)lVar1 >> 0x20) << 7 | (uint)lVar1 >> 0x19) + DAT_00604474;
  lVar1 = (longlong)-v->y * (longlong)iVar2;
  outXY[1] = ((int)((ulonglong)lVar1 >> 0x20) << 7 | (uint)lVar1 >> 0x19) + _DAT_00604478;
  return;
}

