
uint FUN_0042c960(char *param_1,int *param_2)

{
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*param_2 == 0) {
    return 0;
  }
  do {
    pcVar2 = _strstr(param_1,(char *)*param_2);
    if (pcVar2 != (char *)0x0) {
      uVar3 = uVar3 | param_2[1];
    }
    piVar1 = param_2 + 2;
    param_2 = param_2 + 2;
  } while (*piVar1 != 0);
  return uVar3;
}

