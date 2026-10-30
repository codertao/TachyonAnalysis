
char * FUN_00469a70(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = 0;
  pcVar2 = DAT_0058970c;
  if (DAT_00589708 != 0) {
    do {
      iVar1 = FUN_004c67c0(pcVar2,param_1);
      if (iVar1 == 0) {
        return pcVar2;
      }
      uVar3 = uVar3 + 1;
      pcVar2 = pcVar2 + 0x58;
    } while (uVar3 < DAT_00589708);
  }
  return s_Default_0054a738;
}

