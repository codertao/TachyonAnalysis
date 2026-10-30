
void FUN_00477b70(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar3 = DAT_00572028;
  pcVar5 = s_IAInv1_005502c8;
  cVar2 = s_IAInv1_005502c8[0];
  while (cVar2 != '\0') {
    FUN_0043f620(&DAT_00583420,pcVar5,0x20000);
    FUN_0043ce50(&DAT_00583420,pcVar5 + 0x40,8);
    pcVar1 = pcVar5 + 0x84;
    pcVar5 = pcVar5 + 0x84;
    cVar2 = *pcVar1;
  }
  pcVar5 = s_IAInv1_005502c8;
  while ((iVar3 != 0 && (*pcVar5 != '\0'))) {
    if ((*(int *)(iVar3 + 0x80) != 0) &&
       ((*(int *)(iVar3 + 0x7c) != 0 && (*(int *)(iVar3 + 0x78) == 0)))) {
      FUN_0043f6e0(&DAT_00583420,pcVar5,*(int *)(iVar3 + 0x7c));
      FUN_0043f840(&DAT_00583420,pcVar5,0x20000);
      pcVar1 = pcVar5 + 0x40;
      FUN_0043ce50(&DAT_00583420,pcVar1,1);
      iVar4 = Ui_FindButton(&DAT_00583420,pcVar1);
      if (iVar4 != 0) {
        FUN_0043f650(&DAT_00583420,pcVar5,*(undefined4 *)(iVar4 + 0xd4),
                     *(undefined4 *)(iVar4 + 0xd8));
      }
      *(int *)(pcVar5 + 0x80) = iVar3;
      if (*(int *)(iVar3 + 0x84) != 0) {
        FUN_0043ce50(&DAT_00583420,pcVar1,0x10);
      }
      pcVar5 = pcVar5 + 0x84;
    }
    iVar3 = *(int *)(iVar3 + 0x88);
  }
  return;
}

