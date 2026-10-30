
int FUN_0044ba00(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  cVar1 = *DAT_00592e58;
  iVar4 = 0;
  pcVar3 = DAT_00592e58;
  while( true ) {
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = FUN_004c67c0(pcVar3,param_1);
    if (iVar2 == 0) break;
    cVar1 = pcVar3[0x18];
    pcVar3 = pcVar3 + 0x18;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}

