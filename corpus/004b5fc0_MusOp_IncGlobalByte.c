
/* refine: op 40 */

void MusOp_IncGlobalByte(void)

{
  byte *unaff_ESI;
  
  *(char *)(DAT_006695b0 + (uint)*unaff_ESI) = *(char *)(DAT_006695b0 + (uint)*unaff_ESI) + '\x01';
  return;
}

