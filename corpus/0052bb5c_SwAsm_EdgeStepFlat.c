
/* refine: asm: edge step x only */

void SwAsm_EdgeStepFlat(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + 4);
  *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) + *(int *)(unaff_EBP + 0x10);
  if (*(int *)(unaff_EBP + 0x14) <= *(int *)(unaff_EBP + 0x18)) {
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) - *(int *)(unaff_EBP + 0x14);
  }
  return;
}

