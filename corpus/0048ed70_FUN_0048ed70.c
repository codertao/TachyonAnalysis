
void FUN_0048ed70(char *param_1,char param_2,char param_3)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    if (cVar2 == param_2) {
      *param_1 = param_3;
    }
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return;
}

