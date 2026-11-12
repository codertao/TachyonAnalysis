
/* refine: op 24 */

void MusOp_Or(void)

{
  int unaff_EBP;
  
  *(uint *)(unaff_EBP + -8) = *(uint *)(unaff_EBP + -8) | *(uint *)(unaff_EBP + -4);
  return;
}

