
/* refine: op 41 */

void MusOp_DecGlobalByte(void)

{
  byte *unaff_ESI;
  
  *(char *)(DAT_006695b0 + (uint)*unaff_ESI) = *(char *)(DAT_006695b0 + (uint)*unaff_ESI) + -1;
  return;
}

