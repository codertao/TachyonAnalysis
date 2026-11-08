
void FUN_0043ed30(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_004a4420(0);
  FUN_004a4430(0);
  FUN_0049e440(0);
  if (DAT_005a5504 == 1) {
    if (DAT_005a5484 != 0) {
      OurFreeMem(DAT_005a5484);
    }
    puVar2 = &DAT_005a5480;
    for (iVar1 = 0x23; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    FUN_0043ed80();
  }
  return;
}

