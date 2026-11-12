
/* refine: op 21 */

void MusOp_LogAnd(void)

{
  int unaff_EBP;
  
  *(uint *)(unaff_EBP + -8) = *(uint *)(unaff_EBP + -8) & *(uint *)(unaff_EBP + -4);
  return;
}

