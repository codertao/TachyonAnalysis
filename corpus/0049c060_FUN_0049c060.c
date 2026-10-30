
int FUN_0049c060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int local_104;
  char local_100 [256];
  
  local_104 = 0;
  Cbin_FindSection(param_1,param_5);
  do {
    iVar2 = Cbin_FindParam(param_2,local_100,param_3,0,4,param_4,param_5);
    if (iVar2 == 0) {
      return local_104;
    }
    uVar3 = 0xffffffff;
    pcVar4 = local_100;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    local_104 = local_104 + ~uVar3;
  } while( true );
}

