
void __cdecl FUN_10002310(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - (int)param_2;
  iVar2 = 0x10;
  do {
    if (*param_2 != '?') {
      param_2[iVar1] = *param_2;
    }
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

