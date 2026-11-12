
/* sweep: guess */

void Str_CountLines(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_2;
  iVar2 = 0;
  if (cVar1 == '\0') {
    *param_1 = '\0';
    return;
  }
  do {
    if (param_3 + -1 <= iVar2) break;
    *param_1 = cVar1;
    cVar1 = param_2[1];
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  *param_1 = '\0';
  return;
}

