
void FUN_00430de0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = &DAT_0053cbc8;
  puVar4 = &DAT_005aed80;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  DAT_005aed88 = FUN_0041fd80(s_borders_box_0053365c,0xcccc);
  DAT_005aed80 = FUN_00431de0(s_shdw_08_pcx_00535e9c,0x20000);
  DAT_005aed84 = FUN_00431de0(s_shdw_12_pcx_00535974,0x20000);
  DAT_005a6150 = FUN_0049df00(s_helptext_bin_0053cb20,0xcccc);
  FUN_0049c840(DAT_005a6150,s_helptext_bin_0053cb20);
  DAT_005aed8c = 0;
  iVar2 = DAT_0053cbc8;
  while (iVar2 != 0) {
    if ((*(byte *)(puVar3 + 7) & 4) != 0) {
      DAT_005aed8c = DAT_005aed8c + 1;
    }
    piVar1 = puVar3 + 8;
    puVar3 = puVar3 + 8;
    iVar2 = *piVar1;
  }
  puVar3 = (undefined4 *)FUN_0049e0d0(DAT_005a6150,s_key_misc_0053ebc4,&DAT_0053ebd0);
  if (puVar3 != (undefined4 *)0x0) {
    DAT_005aed94 = *puVar3;
  }
  puVar3 = (undefined4 *)FUN_0049e0d0(DAT_005a6150,s_key_misc_0053ebc4,s_seperator_0053ebb8);
  if (puVar3 != (undefined4 *)0x0) {
    DAT_005aed98 = *puVar3;
  }
  return;
}

