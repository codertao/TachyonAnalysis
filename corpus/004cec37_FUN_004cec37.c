
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cec37(void)

{
  uint in_EAX;
  int iVar1;
  uint unaff_EBX;
  undefined4 *puVar2;
  
  if (3 < in_EAX) {
    return;
  }
  if (in_EAX != DAT_004cecc8) {
    _DAT_004cecd0 = 0;
    _DAT_004ceccc = 0;
    puVar2 = &DAT_004cecd4;
    DAT_004cecc8 = in_EAX;
    for (iVar1 = 0x4000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    PTR_FUN_004cecc4 = (&PTR_FUN_004ceca4)[in_EAX];
  }
  if (3 < unaff_EBX) {
    unaff_EBX = 3;
  }
  DAT_004deda2 = '\t' - (char)unaff_EBX;
  DAT_004decee = '\x05' - (char)unaff_EBX;
  DAT_004ded03 = DAT_004decee;
  DAT_004ded41 = DAT_004decee;
  DAT_004ded56 = DAT_004decee;
  return;
}

