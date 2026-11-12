
/* refine: asm: edge step x + u,v (+0x1c/+0x20) with error carry */

void SwAsm_EdgeStepUV(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  
  iVar4 = *(int *)(unaff_EBP + 0x1c) + *(int *)(unaff_EBP + 0x30);
  *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + 4);
  iVar1 = DAT_004e4a60;
  iVar2 = *(int *)(unaff_EBP + 0x20) + *(int *)(unaff_EBP + 0x34);
  iVar3 = *(int *)(unaff_EBP + 0x18) + *(int *)(unaff_EBP + 0x10);
  if (iVar3 < *(int *)(unaff_EBP + 0x14)) {
    *(int *)(unaff_EBP + 0x1c) = iVar4;
    *(int *)(unaff_EBP + 0x20) = iVar2;
    *(int *)(unaff_EBP + 0x18) = iVar3;
    return;
  }
  *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
  iVar2 = iVar2 + DAT_004e4a64;
  *(int *)(unaff_EBP + 0x1c) = iVar4 + iVar1;
  *(int *)(unaff_EBP + 0x20) = iVar2;
  *(int *)(unaff_EBP + 0x18) = iVar3 - *(int *)(unaff_EBP + 0x14);
  return;
}

