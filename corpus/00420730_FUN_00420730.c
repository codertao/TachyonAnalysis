
void FUN_00420730(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  
  if (param_1 != (char *)0x0) {
    DAT_00562b18 = FUN_004206f0(param_2);
    cVar2 = *param_1;
    while (cVar2 != '\0') {
      FUN_00420770(param_1);
      pcVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar1;
    }
  }
  return;
}

