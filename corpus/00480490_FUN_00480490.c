
void FUN_00480490(undefined4 param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = s_Difficulty_Level_Easy_00552d70;
  cVar2 = s_Difficulty_Level_Easy_00552d70[0];
  while (cVar2 != '\0') {
    if (*(int *)(pcVar3 + 0x20) == param_2) {
      FUN_00480410(param_1,pcVar3);
    }
    pcVar1 = pcVar3 + 0x6c;
    pcVar3 = pcVar3 + 0x6c;
    cVar2 = *pcVar1;
  }
  return;
}

