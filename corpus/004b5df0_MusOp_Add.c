
/* refine: op 16 */

void MusOp_Add(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + *(int *)(unaff_EBP + -4);
  return;
}

