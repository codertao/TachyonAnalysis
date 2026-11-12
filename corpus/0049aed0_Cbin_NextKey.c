
/* sweep: guess */

char * Cbin_NextKey(char *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  if (*(uint *)(param_3 + 0x10) <= *(uint *)(param_3 + 0x14)) {
    return (char *)0x0;
  }
  Cbin_KeyCompare(param_1,*(undefined4 *)(param_3 + 8),param_2);
  uVar2 = 0xffffffff;
  *(int *)(param_3 + 0xc) = *(int *)(param_3 + 8);
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  *(uint *)(param_3 + 8) = ~uVar2 + *(int *)(param_3 + 8);
  *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  return param_1;
}

