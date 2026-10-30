
void FUN_00442930(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_005a4044 = 0;
  FUN_00442800(0xffffffff);
  Sleep(200);
  FUN_00442800(0xffffffff);
  Sleep(200);
  FUN_00442800(0xffffffff);
  puVar2 = &DAT_005a4040;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

