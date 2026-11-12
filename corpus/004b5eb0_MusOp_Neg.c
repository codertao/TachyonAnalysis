
/* refine: op 26 */

void MusOp_Neg(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -4) = -*(int *)(unaff_EBP + -4);
  return;
}

