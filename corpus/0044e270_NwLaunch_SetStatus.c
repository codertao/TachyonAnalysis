
/* sweep */

void NwLaunch_SetStatus(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar2 = Mnu_FindText(&g_UiManager,param_1);
  if (iVar2 == 0) {
    pcVar7 = s___s_c_c_00548230;
  }
  else {
    param_1 = *(undefined4 *)(iVar2 + 0x40);
    pcVar7 = s__s_c_c_00548238;
  }
  str_sprintf(&DAT_005a41e0,pcVar7,param_1,0xd,10);
  uVar3 = 0xffffffff;
  pcVar7 = (char *)&DAT_005a41e0;
  do {
    pcVar6 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar2 = -1;
  pcVar7 = (char *)&DAT_00590f00;
  do {
    pcVar5 = pcVar7;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar5 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar5;
  } while (cVar1 != '\0');
  pcVar7 = pcVar6 + -uVar3;
  pcVar6 = pcVar5 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  }
  Ui_SetLabelText(&g_UiManager,s_TxtNWStatus_00548224,&DAT_00590f00);
  NwLaunch_Render();
  return;
}

