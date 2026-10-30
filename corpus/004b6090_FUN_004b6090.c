
uint FUN_004b6090(void)

{
  uint uVar1;
  int unaff_EBP;
  byte *unaff_ESI;
  byte *pbVar2;
  
  DAT_006695c0 = unaff_ESI;
  if ((uint)*unaff_ESI <= *(uint *)(unaff_EBP + -4)) {
    return (uint)unaff_ESI[3];
  }
  pbVar2 = unaff_ESI +
           (uint)unaff_ESI[2] * ((int)*(uint *)(unaff_EBP + -4) % (int)(uint)*unaff_ESI) + 4;
  DAT_006695ac = pbVar2 + unaff_ESI[2];
  if (*pbVar2 == 0) {
    return (uint)unaff_ESI[3];
  }
  uVar1 = (*(code *)(&PTR_FUN_0055ee5c)[*pbVar2])();
  if (pbVar2 + 1 != DAT_006695ac) {
    return uVar1;
  }
  return (uint)DAT_006695c0[3];
}

