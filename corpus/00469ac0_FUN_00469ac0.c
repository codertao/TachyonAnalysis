
char * FUN_00469ac0(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = 0;
  pcVar2 = DAT_00589704;
  if (DAT_00589700 != 0) {
    do {
      iVar1 = str_cmp(pcVar2,param_1);
      if (iVar1 == 0) {
        return pcVar2;
      }
      uVar3 = uVar3 + 1;
      pcVar2 = pcVar2 + 0x4c;
    } while (uVar3 < DAT_00589700);
  }
  return s_Default_0054a6e8;
}

