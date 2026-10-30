
void FUN_00477af0(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = s_IAInvKey1_00550668;
  cVar2 = s_IAInvKey1_00550668[0];
  while (cVar2 != '\0') {
    pcVar1 = pcVar3 + 0x40;
    FUN_0043ce50(&DAT_00583420,pcVar1,8);
    Ui_SetButtonFlag(&DAT_00583420,pcVar1,4);
    Ui_SetButtonFlag(&DAT_00583420,pcVar1,0x2000);
    FUN_0043f810(&DAT_00583420,pcVar3,0);
    FUN_0043f620(&DAT_00583420,pcVar3,0x20000);
    FUN_0043f620(&DAT_00583420,pcVar3,0x80000);
    pcVar1 = pcVar3 + 0x84;
    pcVar3 = pcVar3 + 0x84;
    cVar2 = *pcVar1;
  }
  return;
}

