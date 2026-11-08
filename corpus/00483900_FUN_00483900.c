
char * FUN_00483900(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  
  pcVar2 = (char *)&DAT_0056e3e0;
  uVar3 = 0;
  do {
    if (*pcVar2 != '\0') {
      iVar1 = str_cmp(param_1,pcVar2);
      if (iVar1 == 0) {
        return pcVar2;
      }
    }
    pcVar2 = pcVar2 + 0x100;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  return (char *)0x0;
}

