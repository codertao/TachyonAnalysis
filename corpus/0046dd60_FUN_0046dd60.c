
void FUN_0046dd60(void)

{
  int iVar1;
  int iVar2;
  
  for (iVar1 = DAT_00589754; iVar2 = DAT_00589754, iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x60)) {
    FUN_004b1810(iVar1);
  }
  while (iVar2 != 0) {
    DAT_00589754 = *(int *)(iVar2 + 0x60);
    FUN_0049c530(iVar2);
    iVar2 = DAT_00589754;
  }
  DAT_00589754 = 0;
  FUN_0046dd30(0,0);
  FUN_0049c6e0(0xa104);
  return;
}

