
/* (rt, idx) -> key string of record idx (walks the flat key list from group 0) */

char * Rtxt_GetKeyName(int param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  if (param_1 == 0) {
    return (char *)0x0;
  }
  if (*(uint *)(param_1 + 0xc) <= param_2) {
    return (char *)0x0;
  }
  pcVar2 = *(char **)(*(int *)(param_1 + 4) + 4);
  do {
    if (param_2 == 0) {
      return pcVar2;
    }
    uVar3 = 0xffffffff;
    pcVar4 = pcVar2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    param_2 = param_2 - 1;
    pcVar2 = pcVar2 + ~uVar3;
  } while( true );
}

