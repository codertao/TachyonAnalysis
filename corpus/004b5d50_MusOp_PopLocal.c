
/* refine: op 9 */

void MusOp_PopLocal(void)

{
  int unaff_EBP;
  byte *unaff_ESI;
  
  *(undefined4 *)(DAT_00669480 + (uint)*unaff_ESI) = *(undefined4 *)(unaff_EBP + -4);
  return;
}

