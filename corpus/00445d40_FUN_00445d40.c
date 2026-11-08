
void FUN_00445d40(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  
  puVar7 = &DAT_005a3180;
  iVar5 = 0;
  do {
    iVar2 = str_cmp(puVar7,&DAT_005a60d4);
    if (iVar2 == 0) {
      iVar5 = iVar5 + param_1;
      if (iVar5 < 5) {
        if (iVar5 < 0) {
          iVar5 = 4;
        }
      }
      else {
        iVar5 = 0;
      }
      str_sprintf(&DAT_005a60d4,&DAT_005a3180 + iVar5 * 0x1a);
      FUN_00446100(&DAT_005a31a0 + iVar5 * 0x68,&DAT_005a30e0);
      FUN_0043e6a0(&g_UiManager,s_BtnMPBWShip1_00545c30,&DAT_005a30e0);
      FUN_00446150(&DAT_005a60d4,&DAT_005a3480,&DAT_00545bb0,&DAT_005a36ec);
      FUN_00446d40(&DAT_005444d0,&DAT_005a60d4);
      return;
    }
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 0x1a;
  } while (iVar5 < 5);
  uVar3 = 0xffffffff;
  pcVar6 = (char *)&DAT_005a3180;
  do {
    pcVar8 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar8 + -uVar3;
  pcVar8 = &DAT_005a60d4;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  FUN_00446100(&DAT_005a31a0,&DAT_005a30e0);
  FUN_0043e6a0(&g_UiManager,s_BtnMPBWShip1_00545c30,&DAT_005a30e0);
  FUN_00446150(&DAT_005a60d4,&DAT_005a3480,&DAT_00545bb0,&DAT_005a36ec);
  FUN_00446d40(&DAT_005444d0,&DAT_005a60d4);
  return;
}

