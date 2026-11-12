
/* refine: op 17 */

void MusOp_Sub(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) - *(int *)(unaff_EBP + -4);
  return;
}

