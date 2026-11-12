
/* refine: op 23 */

void MusOp_And(void)

{
  int unaff_EBP;
  
  *(uint *)(unaff_EBP + -8) = *(uint *)(unaff_EBP + -8) & *(uint *)(unaff_EBP + -4);
  return;
}

