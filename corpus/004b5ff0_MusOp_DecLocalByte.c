
/* refine: op 43 */

void MusOp_DecLocalByte(void)

{
  byte *unaff_ESI;
  
  *(char *)(DAT_00669480 + (uint)*unaff_ESI) = *(char *)(DAT_00669480 + (uint)*unaff_ESI) + -1;
  return;
}

