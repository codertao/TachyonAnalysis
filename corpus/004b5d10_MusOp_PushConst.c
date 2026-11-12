
/* refine: op 7 (script constant table +0x30) */

void MusOp_PushConst(void)

{
  undefined4 *unaff_EBP;
  byte *unaff_ESI;
  
  *unaff_EBP = *(undefined4 *)(*(int *)(DAT_0066a62c + 0x30) + (uint)*unaff_ESI * 4);
  return;
}

