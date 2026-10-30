
void FUN_004a2e90(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00602e00;
  for (iVar1 = 0xd9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

