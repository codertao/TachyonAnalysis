
void FUN_004434a0(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  if ((((param_1 < 0) || (7 < param_1)) || (iVar2 = (&DAT_005a40c0)[param_1], iVar2 == 0)) ||
     (*(char *)(iVar2 + 0x40) == '\0')) {
    DAT_005a4010 = 0;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar5 = (char *)(iVar2 + 0x40);
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    pcVar6 = &DAT_005a4010;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    iVar2 = FUN_0046d580(&g_UiManager,iVar2 + 0xa0,1,0,0,0xff);
    if (iVar2 != 0) {
      FUN_0043f6e0(&g_UiManager,s_IAHOPreview_00540e40,iVar2);
      FUN_0043f840(&g_UiManager,s_IAHOPreview_00540e40,0x20000);
      return;
    }
  }
  FUN_0043f620(&g_UiManager,s_IAHOPreview_00540e40,0x20000);
  return;
}

