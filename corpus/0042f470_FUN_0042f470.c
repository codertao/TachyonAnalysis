
int FUN_0042f470(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  puVar4 = &DAT_0053cbc8;
  iVar2 = DAT_0053cbc8;
  while (iVar2 != 0) {
    if ((*(byte *)(puVar4 + 7) & 1) != 0) {
      iVar3 = iVar3 + 1;
    }
    piVar1 = puVar4 + 8;
    puVar4 = puVar4 + 8;
    iVar2 = *piVar1;
  }
  return iVar3;
}

