
void FUN_00478c40(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_00589728 != 0) {
    puVar1 = (undefined4 *)(DAT_00589730 + 0x174);
    iVar2 = DAT_00589728;
    do {
      if ((puVar1 != (undefined4 *)0x174) && (puVar1[-0x59] != 0)) {
        FUN_0046d580(&DAT_00583420,puVar1 + -9,1,puVar1[-1],*puVar1,0);
      }
      puVar1 = puVar1 + 0x6e;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

