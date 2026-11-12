
/* refine: op 28 */

void MusOp_Shl(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -8) =
       *(int *)(unaff_EBP + -8) << ((byte)*(undefined4 *)(unaff_EBP + -4) & 0x1f);
  return;
}

