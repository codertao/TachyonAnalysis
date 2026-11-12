
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void TachCli_ReadPlayerInit(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_1;
  puVar3 = &DAT_005b8f70;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1;
  puVar3 = &DAT_005b8fc0;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  DAT_005b3a24 = (uint)*(ushort *)((int)param_1 + 0x12);
  iVar1 = DAT_005b3a24 * 0x10 + DAT_0058f2e8;
  _DAT_005b3a2c = *(undefined4 *)(iVar1 + 8);
  _DAT_005b3a28 = *(undefined4 *)(iVar1 + 4);
  _DAT_005b3a30 = *(undefined4 *)(iVar1 + 0xc);
  PlayerDcb_Init(param_1);
  return;
}

