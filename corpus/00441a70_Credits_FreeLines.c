
/* sweep */

void Credits_FreeLines(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = DAT_005a41b4;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x130);
    OurFreeMem(iVar2);
    iVar2 = iVar1;
  }
  OurFreeMem(DAT_005a41b8);
  puVar3 = &DAT_005a4120;
  for (iVar2 = 0x2a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return;
}

