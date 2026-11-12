
/* sweep: guess */

void Str_HashName(char *param_1,char param_2,char param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  
  if (param_1 != (char *)0x0) {
    iVar2 = -1;
    uVar5 = 0;
    pcVar4 = param_1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = param_1;
    if (iVar2 != -2) {
      do {
        if (*pcVar4 == param_2) {
          *pcVar4 = param_3;
        }
        uVar5 = uVar5 + 1;
        uVar3 = 0xffffffff;
        pcVar6 = param_1;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        pcVar4 = pcVar4 + 1;
      } while (uVar5 < ~uVar3 - 1);
    }
  }
  return;
}

