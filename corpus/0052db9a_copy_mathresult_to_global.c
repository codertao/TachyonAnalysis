
void copy_mathresult_to_global(void)

{
  int *unaff_ESI;
  
  GLBL_fvec3_rotB.x = *unaff_ESI;
  GLBL_fvec3_rotB.y = unaff_ESI[1];
  GLBL_fvec3_rotB.z = unaff_ESI[2];
  GLBL_fvec3_rotA.x = unaff_ESI[3];
  GLBL_fvec3_rotA.y = unaff_ESI[4];
  GLBL_fvec3_rotA.z = unaff_ESI[5];
  return;
}

