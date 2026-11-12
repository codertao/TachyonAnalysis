
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

void Gfx_InitTables(void)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  int local_4;
  
  puVar4 = &DAT_006046c0;
  for (iVar3 = 0x2c6e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  _DAT_0060e6cc = &DAT_0060c6cc;
  DAT_0060e6d4 = 8;
  DAT_0060e6d5 = 5;
  _DAT_0060e6d8 = 0x20008;
  puVar4 = &DAT_006046cc;
  for (iVar3 = 0x2000; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  _DAT_0060e6e4 = &DAT_006046cc;
  _DAT_0060e6e8 = 0x8000;
  _DAT_0060e6ec = 0x400;
  _DAT_0060e6f0 = 0x20;
  _DAT_0060e72c = 8;
  _DAT_0060e730 = 1;
  _DAT_0060e734 = 0x400;
  _DAT_0060e738 = 0;
  _DAT_0060e73c = 0;
  Image_SetSubRect(&DAT_0060e6e4,0,0,0x400,0x20);
  local_4 = 0;
  pfVar1 = (float *)&DAT_0060e85c;
  do {
    fVar5 = (float10)local_4;
    local_4 = local_4 + 1;
    pfVar2 = pfVar1 + 1;
    fVar5 = (float10)fsin(fVar5 * (float10)_DAT_0052ef48);
    *pfVar1 = (float)fVar5;
    pfVar1 = pfVar2;
  } while ((int)pfVar2 < 0x60f861);
  DAT_0060f870 = 0x100;
  return;
}

