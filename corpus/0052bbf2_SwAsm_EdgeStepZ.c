
/* refine: asm: edge step x + z (+0x4c), used on the z-buffer side */

void SwAsm_EdgeStepZ(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + 0x4c) = *(int *)(unaff_EBP + 0x4c) + *(int *)(unaff_EBP + 0x50);
  *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + 4);
  *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) + *(int *)(unaff_EBP + 0x10);
  if (*(int *)(unaff_EBP + 0x14) <= *(int *)(unaff_EBP + 0x18)) {
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) - *(int *)(unaff_EBP + 0x14);
  }
  return;
}

