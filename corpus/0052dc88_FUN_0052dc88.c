
void FUN_0052dc88(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  GLBL_MATH_TMPZ_FRAC = unaff_ESI[2];
  *unaff_EDI = *unaff_ESI;
  unaff_EDI[2] = (int)ROUND((float)(int)unaff_ESI[2] * (float)GLBL_fvec3_rotA.x -
                            (float)(int)unaff_ESI[1] * (float)GLBL_fvec3_rotB.z);
  unaff_EDI[1] = (int)ROUND((float)GLBL_MATH_TMPZ_FRAC * (float)GLBL_fvec3_rotB.z +
                            (float)(int)unaff_ESI[1] * (float)GLBL_fvec3_rotA.x);
  return;
}

