
/* refine: op 21: computes -1/0 booleans of both operands but never uses them, then ANDs the raw
   values (= bitwise &, same as op 23) */

void MusOp_AndQuirk(void)

{
  int unaff_EBP;
  
  *(uint *)(unaff_EBP + -8) = *(uint *)(unaff_EBP + -8) & *(uint *)(unaff_EBP + -4);
  return;
}

