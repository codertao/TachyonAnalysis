
/* refine: op 25 */

void MusOp_Xor(void)

{
  int unaff_EBP;
  
  *(uint *)(unaff_EBP + -8) = *(uint *)(unaff_EBP + -8) ^ *(uint *)(unaff_EBP + -4);
  return;
}

