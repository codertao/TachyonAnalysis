
void FUN_0052dbe0(void)

{
  int *unaff_ESI;
  int *unaff_EDI;
  
  GLBL_MATH_TMPZ_FRAC = unaff_ESI[2];
  unaff_EDI[1] = unaff_ESI[1];
  unaff_EDI[2] = (int)ROUND((float)unaff_ESI[2] * (float)GLBL_fvec3_rotB.y -
                            (float)*unaff_ESI * (float)GLBL_fvec3_rotB.x);
  *unaff_EDI = (int)ROUND((float)GLBL_MATH_TMPZ_FRAC * (float)GLBL_fvec3_rotB.x +
                          (float)*unaff_ESI * (float)GLBL_fvec3_rotB.y);
  return;
}

