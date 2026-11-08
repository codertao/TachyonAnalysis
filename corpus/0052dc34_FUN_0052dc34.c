
void FUN_0052dc34(void)

{
  int *unaff_ESI;
  int *unaff_EDI;
  
  GLBL_MATH_TMPZ_FRAC = *unaff_ESI;
  unaff_EDI[2] = unaff_ESI[2];
  *unaff_EDI = (int)ROUND((float)*unaff_ESI * (float)GLBL_fvec3_rotA.z -
                          (float)unaff_ESI[1] * (float)GLBL_fvec3_rotA.y);
  unaff_EDI[1] = (int)ROUND((float)GLBL_MATH_TMPZ_FRAC * (float)GLBL_fvec3_rotA.y +
                            (float)unaff_ESI[1] * (float)GLBL_fvec3_rotA.z);
  return;
}

