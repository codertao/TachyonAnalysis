
undefined4 * FUN_0042f4a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = &DAT_0053cbc8;
  iVar1 = DAT_0053cbc8;
  do {
    if (iVar1 == 0) {
      return (undefined4 *)0x0;
    }
    if ((*(byte *)(puVar2 + 7) & 1) != 0) {
      if (iVar3 == param_1) {
        return puVar2;
      }
      iVar3 = iVar3 + 1;
    }
    iVar1 = puVar2[8];
    puVar2 = puVar2 + 8;
  } while( true );
}

