
void FUN_004b68a0(char *param_1,uint param_2,int param_3,char param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  cVar1 = *param_1;
  pcVar3 = (char *)((param_3 * 0x50 + param_2) * 2 + 0xb0000);
  while( true ) {
    if (cVar1 == '\0') {
      return;
    }
    if (cVar1 == '\t') {
      *pcVar3 = ' ';
      pcVar3[1] = param_4;
      pcVar2 = pcVar3;
      while( true ) {
        param_2 = param_2 + 1;
        pcVar3 = pcVar2 + 2;
        if ((0x4f < param_2) || ((param_2 & 3) == 0)) break;
        *pcVar3 = ' ';
        pcVar2[3] = param_4;
        pcVar2 = pcVar3;
      }
    }
    else {
      *pcVar3 = cVar1;
      pcVar3[1] = param_4;
      pcVar3 = pcVar3 + 2;
      param_2 = param_2 + 1;
    }
    param_1 = param_1 + 1;
    if (0x4f < param_2) break;
    cVar1 = *param_1;
  }
  return;
}

