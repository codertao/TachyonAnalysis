
/* sweep: guess */

undefined4 TextEntry_SetText(undefined1 param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  if (param_3 != 0) {
    pcVar2 = *(char **)(param_3 + 0xa4);
    uVar3 = 0xffffffff;
    pcVar4 = pcVar2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < param_2 - 1U) {
      str_sprintf(pcVar2,&DAT_0053fed4,pcVar2,param_1);
      return 1;
    }
  }
  return 0;
}

