
/* sweep: guess */

void SbNews_ClearButtons(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = s_BtnNewsItem0_00552910;
  cVar2 = s_BtnNewsItem0_00552910[0];
  while (cVar2 != '\0') {
    pcVar3[0x44] = '\0';
    pcVar3[0x45] = '\0';
    pcVar3[0x46] = '\0';
    pcVar3[0x47] = '\0';
    pcVar1 = pcVar3 + 0x88;
    pcVar3 = pcVar3 + 0x88;
    cVar2 = *pcVar1;
  }
  return;
}

