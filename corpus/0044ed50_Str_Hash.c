
/* sweep: guess */

void Str_Hash(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    if (*param_1 == ' ') {
      *param_1 = '_';
    }
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return;
}

