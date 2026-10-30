
undefined4 * FUN_004a7930(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = DAT_00601e78;
  if (DAT_00601e74 != 0) {
    do {
      if ((puVar2[3] == 0) && (iVar1 = _AIL_sample_status_4(*puVar2), iVar1 == 2)) {
        return puVar2;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 4;
    } while (uVar3 < DAT_00601e74);
  }
  return (undefined4 *)0x0;
}

