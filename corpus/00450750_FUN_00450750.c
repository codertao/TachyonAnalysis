
void FUN_00450750(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    while (cVar1 != '.') {
      cVar1 = param_1[1];
      param_1 = param_1 + 1;
      if (cVar1 == '\0') {
        return;
      }
    }
    *param_1 = '\0';
  }
  return;
}

