
/* sweep */

void OptMenu_Build(void)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  
  ppuVar5 = &PTR_GLBL_spacesav_47__00553de8;
  puVar3 = PTR_GLBL_spacesav_47__00553de8;
  while (puVar3 != (undefined *)0x0) {
    OptMenu_AddDifficulty(ppuVar5,ppuVar5[1]);
    ppuVar1 = ppuVar5 + 100;
    ppuVar5 = ppuVar5 + 100;
    puVar3 = *ppuVar1;
  }
  ppuVar5 = &PTR_GLBL_spacesav_44__00554428;
  puVar3 = PTR_GLBL_spacesav_44__00554428;
  while (puVar3 != (undefined *)0x0) {
    OptMenu_AddDifficulty(ppuVar5,ppuVar5[1]);
    ppuVar1 = ppuVar5 + 100;
    ppuVar5 = ppuVar5 + 100;
    puVar3 = *ppuVar1;
  }
  ppuVar5 = &PTR_GLBL_spacesav_82__00554d88;
  puVar3 = PTR_GLBL_spacesav_82__00554d88;
  while (puVar3 != (undefined *)0x0) {
    OptMenu_AddDifficulty(ppuVar5,ppuVar5[1]);
    ppuVar1 = ppuVar5 + 100;
    ppuVar5 = ppuVar5 + 100;
    puVar3 = *ppuVar1;
  }
  ppuVar5 = &PTR_GLBL_spacesav_62__005550a8;
  puVar3 = PTR_GLBL_spacesav_62__005550a8;
  while (puVar3 != (undefined *)0x0) {
    OptMenu_AddDifficulty(ppuVar5,ppuVar5[1]);
    ppuVar1 = ppuVar5 + 100;
    ppuVar5 = ppuVar5 + 100;
    puVar3 = *ppuVar1;
  }
  puVar6 = &DAT_00555a08;
  iVar4 = DAT_00555a08;
  while (iVar4 != 0) {
    OptMenu_AddDifficulty(puVar6,puVar6[1]);
    piVar2 = puVar6 + 100;
    puVar6 = puVar6 + 100;
    iVar4 = *piVar2;
  }
  ppuVar5 = &PTR_GLBL_spacesav_64__00555b98;
  puVar3 = PTR_GLBL_spacesav_64__00555b98;
  while (puVar3 != (undefined *)0x0) {
    OptMenu_AddDifficulty(ppuVar5,ppuVar5[1]);
    ppuVar1 = ppuVar5 + 100;
    ppuVar5 = ppuVar5 + 100;
    puVar3 = *ppuVar1;
  }
  puVar6 = &DAT_00556368;
  iVar4 = DAT_00556368;
  while (iVar4 != 0) {
    OptMenu_AddDifficulty(puVar6,puVar6[1]);
    piVar2 = puVar6 + 100;
    puVar6 = puVar6 + 100;
    iVar4 = *piVar2;
  }
  return;
}

