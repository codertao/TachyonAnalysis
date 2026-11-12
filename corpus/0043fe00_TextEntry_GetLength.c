
/* sweep */

void TextEntry_GetLength(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_1 != 0) {
    uVar2 = 0xffffffff;
    pcVar3 = *(char **)(param_1 + 0xa4);
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (~uVar2 != 1) {
      (*(char **)(param_1 + 0xa4))[~uVar2 - 2] = '\0';
    }
  }
  return;
}

