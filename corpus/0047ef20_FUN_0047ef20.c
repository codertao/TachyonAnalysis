
void FUN_0047ef20(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  pcVar6 = s_BtnNewsItem0_00552910;
  cVar1 = s_BtnNewsItem0_00552910[0];
  while (cVar1 != '\0') {
    pcVar6[0x40] = '\0';
    pcVar6[0x41] = '\0';
    pcVar6[0x42] = '\0';
    pcVar6[0x43] = '\0';
    FUN_0043ce50(&DAT_00583420,pcVar6,8);
    FUN_0043e6a0(&DAT_00583420,pcVar6,&DAT_00562b14);
    FUN_0043f620(&DAT_00583420,pcVar6 + 0x48,0x20000);
    if (*(int *)(pcVar6 + 0x44) == 0) {
      uVar2 = Ui_FindButton(&DAT_00583420,pcVar6);
      *(undefined4 *)(pcVar6 + 0x44) = uVar2;
      FUN_0043e670(&DAT_00583420,pcVar6,0x80);
      FUN_0043e610(&DAT_00583420,pcVar6,0x400);
      Ui_SetButtonFlag(&DAT_00583420,pcVar6,0x2000);
      iVar3 = *(int *)(pcVar6 + 0x44);
      local_10 = *(int *)(iVar3 + 0xd4) + 8;
      local_c = *(int *)(iVar3 + 0xd8);
      local_8 = *(int *)(iVar3 + 200) + -0x10 + local_10;
      local_4 = *(int *)(iVar3 + 0xcc) + local_c;
      FUN_0043e5c0(&DAT_00583420,pcVar6,&local_10);
    }
    pcVar7 = pcVar6 + 0x88;
    pcVar6 = pcVar6 + 0x88;
    cVar1 = *pcVar7;
  }
  iVar3 = DAT_005636ac * 0x100 + DAT_00589738;
  pcVar6 = s_BtnNewsItem0_00552910;
  cVar1 = s_BtnNewsItem0_00552910[0];
  for (uVar5 = DAT_005636ac; (cVar1 != '\0' && (uVar5 < DAT_00589734)); uVar5 = uVar5 + 1) {
    if (*(int *)(iVar3 + 0xf8) == 0) {
      pcVar7 = s_SHADOW10w_00540e34;
    }
    else {
      pcVar7 = s_SHADOW12w_0054e750;
    }
    FUN_0043e580(&DAT_00583420,pcVar6,pcVar7);
    if (*(int *)(iVar3 + 0xfc) != 0) {
      pcVar7 = pcVar6 + 0x48;
      *(int *)(pcVar6 + 0x40) = iVar3;
      FUN_0043ce50(&DAT_00583420,pcVar6,1);
      if ((DAT_005636b4 != 0) &&
         (iVar4 = FUN_004c67c0(*(undefined4 *)(pcVar6 + 0x40),DAT_005636b4), iVar4 == 0)) {
        FUN_0043ce50(&DAT_00583420,pcVar6,0x10);
      }
      if ((*(int **)(iVar3 + 0xb8) != (int *)0x0) && (iVar4 = **(int **)(iVar3 + 0xb8), iVar4 != 0))
      {
        FUN_0043e6a0(&DAT_00583420,pcVar6,iVar4);
      }
      if ((*(int *)(iVar3 + 0xec) != 0) && (*(int *)(iVar3 + 0xb4) != 0)) {
        FUN_0043f840(&DAT_00583420,pcVar7,0x20000);
        FUN_0043f810(&DAT_00583420,pcVar7,1);
        FUN_0043f5d0(&DAT_00583420,pcVar7,0);
      }
      pcVar6 = pcVar6 + 0x88;
    }
    iVar3 = iVar3 + 0x100;
    cVar1 = *pcVar6;
  }
  return;
}

