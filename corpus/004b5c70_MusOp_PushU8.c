
/* refine: op 1 */

void MusOp_PushU8(void)

{
  uint *unaff_EBP;
  byte *unaff_ESI;
  
  *unaff_EBP = (uint)*unaff_ESI;
  return;
}

