
undefined4 * FUN_004ad520(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)FUN_0049c500(0x718,4,0,s_PALREF_0055e9ac,DAT_0055e968);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar3 = puVar1;
  for (iVar2 = 0x1c6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = param_1;
  puVar4 = puVar1;
  for (iVar2 = 0xc0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = puVar1 + 0xc0;
  for (iVar2 = 0xc0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar3 = puVar1 + 0x180;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar2 = FUN_0049c500(0x800,0x20,0,s_palref_master_table_0055e998,DAT_0055e968);
  puVar1[0x1c2] = iVar2;
  if (iVar2 == 0) {
    return (undefined4 *)0x0;
  }
  if ((DAT_0055e964 == 0x10) && (DAT_0055e96c != 0)) {
    iVar2 = FUN_0049c500(0x8000,0x20,0,s_palref_light_table_0055e984,DAT_0055e968);
    puVar1[0x1c3] = iVar2;
    if (iVar2 == 0) {
      return (undefined4 *)0x0;
    }
    iVar2 = FUN_0049c500(0x8000,0x20,0,s_palref_haze_table_0055e970,DAT_0055e968);
    puVar1[0x1c4] = iVar2;
    if (iVar2 == 0) {
      return (undefined4 *)0x0;
    }
  }
  return puVar1;
}

