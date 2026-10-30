
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052baf8(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + 4);
  *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + *(int *)(unaff_EBP + 0x30);
  *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + *(int *)(unaff_EBP + 0x34);
  *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + 0x24) + *(int *)(unaff_EBP + 0x38);
  *(int *)(unaff_EBP + 0x28) = *(int *)(unaff_EBP + 0x28) + *(int *)(unaff_EBP + 0x3c);
  *(int *)(unaff_EBP + 0x2c) = *(int *)(unaff_EBP + 0x2c) + *(int *)(unaff_EBP + 0x40);
  *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) + *(int *)(unaff_EBP + 0x10);
  if (*(int *)(unaff_EBP + 0x14) <= *(int *)(unaff_EBP + 0x18)) {
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
    *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0x18) - *(int *)(unaff_EBP + 0x14);
    *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + DAT_004e4a60;
    *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + DAT_004e4a64;
    *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + 0x24) + DAT_004e4a70;
    *(int *)(unaff_EBP + 0x28) = *(int *)(unaff_EBP + 0x28) + _DAT_004e4a78;
    *(int *)(unaff_EBP + 0x2c) = *(int *)(unaff_EBP + 0x2c) + _DAT_004e4a80;
  }
  return;
}

