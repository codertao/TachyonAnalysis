
void FUN_004afde0(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = param_1 + (~uVar2 - 1);
  do {
    if (pcVar3 <= param_1) {
      return;
    }
    if (*pcVar3 == ' ') {
      *pcVar3 = '\0';
    }
    else if (*pcVar3 != '\0') {
      return;
    }
    pcVar3 = pcVar3 + -1;
  } while( true );
}

