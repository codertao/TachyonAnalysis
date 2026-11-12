
/* sweep */

void Shipyard_FreeModels(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  Pak_UnloadModel(DAT_0056e38c);
  DAT_0056e38c = 0;
  puVar3 = &DAT_0056e340;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar1 = 5;
  puVar3 = &DAT_00587bc8;
  do {
    Pak_UnloadModel(puVar3[-0x14]);
    Pak_UnloadModel(*puVar3);
    puVar3[-0x14] = 0;
    *puVar3 = 0;
    puVar4 = puVar3 + -0x13;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar4 = puVar3 + 0x6d;
    iVar1 = iVar1 + -1;
    for (iVar2 = 0x13; puVar3 = puVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
    }
    puVar3 = puVar4;
  } while (iVar1 != 0);
  Mem_FreeTag(0xa103);
  return;
}

