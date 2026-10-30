
void FUN_00427d90(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  
  DAT_005b1870 = FUN_00431de0(s_shdw_12_pcx_00535974,0x20000);
  DAT_005b1b54 = FUN_00431de0(s_shdw_08b_pcx_005366e0,0x20000);
  uVar3 = FUN_0048e800(DAT_005a6140,0x41,0xff,0x40,0,0x12000,4,DAT_005b1b54,0);
  FUN_00427d30(&DAT_005b18a8,0x22c,0x9e,uVar3);
  uVar3 = FUN_0048e800(DAT_005a6140,0x2f,0xff,0x40,0,0x12000,4,DAT_005b1870,1);
  FUN_00427d30(&DAT_005b1874,0x140,100,uVar3);
  uVar3 = FUN_0048e800(DAT_005a6140,0x32,0xff,0xe6,0,0x10000,4,DAT_005b1b54,0);
  FUN_00427d30(&DAT_005b18dc,0x140,0x140,uVar3);
  uVar3 = FUN_0048e800(DAT_005a6140,0x40,0xff,0xe6,0,0x10000,4,DAT_005b1b54,0);
  FUN_00427d30(&DAT_005b1910,0x140,0x136,uVar3);
  ppuVar4 = &PTR_DAT_00536558;
  puVar2 = PTR_DAT_00536558;
  while (puVar2 != (undefined *)0x0) {
    *(undefined **)(puVar2 + 0x48) = ppuVar4[1];
    puVar2 = *ppuVar4;
    ppuVar1 = ppuVar4 + 2;
    ppuVar4 = ppuVar4 + 3;
    *(undefined **)(puVar2 + 0x4c) = *ppuVar1;
    puVar2 = *ppuVar4;
  }
  return;
}

