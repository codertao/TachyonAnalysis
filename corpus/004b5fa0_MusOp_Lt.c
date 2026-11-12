
/* refine: op 37 */

void MusOp_Lt(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = 0;
  if (*(int *)(unaff_EBP + -8) < *(int *)(unaff_EBP + -4)) {
    uVar1 = 0xffffffff;
  }
  *(undefined4 *)(unaff_EBP + -8) = uVar1;
  return;
}

