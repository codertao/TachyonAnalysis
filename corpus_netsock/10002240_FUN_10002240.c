
undefined4 __cdecl FUN_10002240(undefined4 param_1,undefined4 param_2,char *param_3,int *param_4)

{
  char cVar1;
  char *_Str;
  int iVar2;
  
  _Str = strstr(param_3,&DAT_100070b4);
  if (_Str == (char *)0x0) {
    return 0;
  }
  do {
    do {
      cVar1 = _Str[1];
      _Str = _Str + 1;
    } while (cVar1 == ' ');
  } while ((cVar1 == '\t') || (cVar1 == '\v'));
  iVar2 = atoi(_Str);
  *param_4 = iVar2;
  return 1;
}

