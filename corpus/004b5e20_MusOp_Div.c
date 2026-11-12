
/* refine: op 19 */

void MusOp_Div(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) / *(int *)(unaff_EBP + -4);
  return;
}

