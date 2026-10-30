
void FUN_004a0d20(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_006038a0;
  for (iVar1 = 0x1d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

