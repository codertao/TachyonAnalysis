
/* refine: op 42 */

void MusOp_IncLocalByte(void)

{
  byte *unaff_ESI;
  
  *(char *)(DAT_00669480 + (uint)*unaff_ESI) = *(char *)(DAT_00669480 + (uint)*unaff_ESI) + '\x01';
  return;
}

