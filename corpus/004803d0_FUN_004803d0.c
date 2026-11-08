
char * FUN_004803d0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = s_Difficulty_Level_Easy_00552d70;
  cVar1 = s_Difficulty_Level_Easy_00552d70[0];
  while( true ) {
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    iVar2 = str_cmp(pcVar3,param_1);
    if (iVar2 == 0) break;
    cVar1 = pcVar3[0x6c];
    pcVar3 = pcVar3 + 0x6c;
  }
  return pcVar3;
}

