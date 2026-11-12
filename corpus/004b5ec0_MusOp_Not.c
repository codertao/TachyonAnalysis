
/* refine: op 27 */

void MusOp_Not(void)

{
  int unaff_EBP;
  
  *(uint *)(unaff_EBP + -4) = ~*(uint *)(unaff_EBP + -4);
  return;
}

