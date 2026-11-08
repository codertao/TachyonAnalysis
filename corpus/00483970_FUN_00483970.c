
uint FUN_00483970(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = 0;
  pcVar2 = &DAT_0056f444;
  do {
    if (*pcVar2 != '\0') {
      iVar1 = str_cmp(param_1,pcVar2);
      if (iVar1 == 0) {
        return uVar3;
      }
    }
    pcVar2 = pcVar2 + 0x148;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  return 0xffffffff;
}

