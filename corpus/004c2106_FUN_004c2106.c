
int FUN_004c2106(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    if (((cVar1 < 'A') || ('Z' < cVar1)) && ((cVar1 < 'a' || ('z' < cVar1)))) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

