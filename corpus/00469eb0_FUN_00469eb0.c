
void FUN_00469eb0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00469e50();
  FUN_0046dd60();
  FUN_0046d870();
  FUN_0049c6e0(0xa100);
  puVar2 = &DAT_005879a0;
  for (iVar1 = 0x76f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

