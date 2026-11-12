
/* refine: slot 0x6c */

undefined4 * DPlay_GetPlayerName(undefined4 param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puStack_14;
  undefined4 local_4;
  
  if (DAT_0055e3e0 != 0) {
    puStack_14 = &local_4;
    local_4 = 0;
    (**(code **)(*DAT_005b9af4 + 0x54))(DAT_005b9af4,param_1,0);
    puVar2 = (undefined4 *)Mem_AllocTemp2(puStack_14);
    puVar7 = puVar2;
    for (uVar4 = (uint)puStack_14 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = (uint)puStack_14 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    *puVar2 = 0x10;
    iVar3 = (**(code **)(*DAT_005b9af4 + 0x54))(DAT_005b9af4,param_1,puVar2,&puStack_14);
    if (iVar3 == 0) {
      uVar4 = 0xffffffff;
      pcVar6 = (char *)puVar2[2];
      do {
        pcVar8 = pcVar6;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar6 = pcVar8 + -uVar4;
      pcVar8 = (char *)&DAT_00564914;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      Mem_FreeTemp(puVar2);
      return &DAT_00564914;
    }
    Mem_FreeTemp(puVar2);
  }
  return (undefined4 *)0x0;
}

