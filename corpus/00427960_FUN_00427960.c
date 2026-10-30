
void FUN_00427960(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  DAT_005b013c = (undefined4 *)FUN_004ad650(s_hudpal_pcx_0053669c);
  FUN_004ad900(DAT_005b013c,0x80,0x80,0x80,0x80,0x80);
  puVar2 = DAT_005b013c;
  puVar3 = &DAT_00603180;
  for (iVar1 = 0xc0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

