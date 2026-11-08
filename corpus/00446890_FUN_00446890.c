
char * FUN_00446890(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    iVar2 = str_cmp(param_1,param_2);
    if (iVar2 == 0) break;
    cVar1 = param_1[0xac];
    param_1 = param_1 + 0xac;
  }
  return param_1;
}

