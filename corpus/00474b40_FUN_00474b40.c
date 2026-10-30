
void FUN_00474b40(int param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = 0;
  pcVar4 = s_BtnCFGSell1_0054f138;
  cVar2 = s_BtnCFGSell1_0054f138[0];
  if (DAT_0056360c == 0) {
    while (cVar2 != '\0') {
      iVar3 = FUN_0043ca90(&DAT_00583420,pcVar4);
      if (iVar3 != 8) {
        if (iVar5 == param_1) {
          DAT_005635fc = *(int *)(pcVar4 + 0x100);
          if (DAT_005635fc != 0) {
            *(undefined4 *)(DAT_005635fc + 0x54) = 0;
            FUN_00474190(*(undefined4 *)(*(int *)(pcVar4 + 0x100) + 0x50));
          }
        }
        else {
          FUN_0043ce50(&DAT_00583420,pcVar4,1);
        }
      }
      pcVar1 = pcVar4 + 0x174;
      pcVar4 = pcVar4 + 0x174;
      iVar5 = iVar5 + 1;
      cVar2 = *pcVar1;
    }
    pcVar4 = s_BtnCFGBuy1_0054e9f0;
    cVar2 = s_BtnCFGBuy1_0054e9f0[0];
    while (cVar2 != '\0') {
      iVar5 = FUN_0043ca90(&DAT_00583420,pcVar4);
      if (iVar5 != 8) {
        FUN_0043ce50(&DAT_00583420,pcVar4,1);
      }
      pcVar1 = pcVar4 + 0x174;
      pcVar4 = pcVar4 + 0x174;
      cVar2 = *pcVar1;
    }
    DAT_005635f8 = 0;
    DAT_00563600 = 0;
    if (DAT_005635fc != 0) {
      FUN_00476d90(DAT_005635fc);
    }
    FUN_00474580();
    FUN_00474980(DAT_005635fc,0);
  }
  return;
}

