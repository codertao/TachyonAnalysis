
void FUN_00430c00(char *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  
  if (param_1 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar4 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    pcVar4 = param_1 + (~uVar3 - 2);
    cVar2 = param_1[~uVar3 - 2];
    while (((cVar2 != '\0' && (pcVar4 != param_1)) &&
           ((cVar2 == '\n' || ((cVar2 == ' ' || (cVar2 == '\t'))))))) {
      *pcVar4 = '\0';
      pcVar1 = pcVar4 + -1;
      pcVar4 = pcVar4 + -1;
      cVar2 = *pcVar1;
    }
  }
  return;
}

