
undefined4 * FUN_004a7b50(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = DAT_00601e78;
  if (DAT_00601e74 != 0) {
    do {
      if ((puVar2 == param_1) && (iVar1 = _AIL_sample_status_4(*puVar2), iVar1 == 4)) {
        return param_1;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 4;
    } while (uVar3 < DAT_00601e74);
  }
  return (undefined4 *)0x0;
}

