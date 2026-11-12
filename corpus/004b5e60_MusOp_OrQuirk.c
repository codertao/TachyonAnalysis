
/* refine: op 22: same quirk, raw OR (= op 24) */

void MusOp_OrQuirk(void)

{
  int unaff_EBP;
  
  *(uint *)(unaff_EBP + -8) = *(uint *)(unaff_EBP + -8) | *(uint *)(unaff_EBP + -4);
  return;
}

