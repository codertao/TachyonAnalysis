
/* refine: op 30 (x==0 -> -1) */

void MusOp_LogNot(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = 0;
  if (*(int *)(unaff_EBP + -4) == 0) {
    uVar1 = 0xffffffff;
  }
  *(undefined4 *)(unaff_EBP + -4) = uVar1;
  return;
}

