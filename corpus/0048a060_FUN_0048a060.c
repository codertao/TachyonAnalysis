
void FUN_0048a060(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = s_BtnWing0_00558948;
  cVar2 = s_BtnWing0_00558948[0];
  while (cVar2 != '\0') {
    FUN_0043ce50(&DAT_00583420,pcVar3,8);
    FUN_0043f620(&DAT_00583420,pcVar3 + 0x40,0x20000);
    FUN_0043f840(&DAT_00583420,pcVar3 + 0x40,0x80000);
    pcVar1 = pcVar3 + 0x84;
    pcVar3 = pcVar3 + 0x84;
    cVar2 = *pcVar1;
  }
  return;
}

