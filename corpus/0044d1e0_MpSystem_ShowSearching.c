
/* sweep */

void MpSystem_ShowSearching(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar2 = Mnu_FindText(&g_UiManager,s_MULTI_SEARCHING_005480c0);
  if (iVar2 == 0) {
    pcVar3 = s__Searching_005480b4;
  }
  else {
    pcVar3 = *(char **)(iVar2 + 0x40);
  }
  str_sprintf(&DAT_00591260,&DAT_005480b0,pcVar3);
  iVar2 = DAT_00562cbc;
  if (DAT_00562cbc == 0) {
    Ui_RefreshWindow(&g_UiManager,s_WndMPSystem_00547ea8,0,0);
    iVar2 = DAT_00562cbc;
  }
  DAT_00562cbc = iVar2 + 1;
  if (8 < DAT_00562cbc) {
    DAT_00562cbc = 0;
  }
  do {
    if (iVar2 == 0) {
      Ui_SetLabelText(&g_UiManager,s_TxtMPIPXBanner_00547fe0,&DAT_00591260);
      return;
    }
    uVar4 = 0xffffffff;
    pcVar3 = &DAT_005480ac;
    do {
      pcVar8 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar3 = (char *)&DAT_00591260;
    do {
      pcVar7 = pcVar3;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar7;
    } while (cVar1 != '\0');
    pcVar3 = pcVar8 + -uVar4;
    pcVar8 = pcVar7 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar8 = pcVar8 + 4;
    }
    iVar2 = iVar2 + -1;
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar8 = pcVar8 + 1;
    }
  } while( true );
}

