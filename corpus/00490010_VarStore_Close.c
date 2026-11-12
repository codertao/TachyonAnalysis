
undefined4 VarStore_Close(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = Mem_FreeTag(DAT_0056aa90);
  puVar3 = &DAT_0056aa80;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return uVar1;
}

