
void FUN_004e6316(void)

{
  int iVar1;
  undefined1 *unaff_ESI;
  undefined1 *puVar2;
  
  puVar2 = &DAT_004e5abc;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    puVar2[3] = 0;
    puVar2[2] = *unaff_ESI;
    puVar2[1] = unaff_ESI[1];
    *puVar2 = unaff_ESI[2];
    unaff_ESI = unaff_ESI + 3;
    puVar2 = puVar2 + 4;
  }
  return;
}

