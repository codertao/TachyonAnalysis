
/* refine: op 20 */

int MusOp_Mod(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -8);
  *(int *)(unaff_EBP + -8) = iVar1 % *(int *)(unaff_EBP + -4);
  return iVar1 / *(int *)(unaff_EBP + -4);
}

