
/* refine: op 29 */

void MusOp_Sar(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -8) =
       *(int *)(unaff_EBP + -8) >> ((byte)*(undefined4 *)(unaff_EBP + -4) & 0x1f);
  return;
}

