
undefined4
FUN_0049b2e0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  char local_300 [256];
  undefined1 local_200 [256];
  char local_100;
  char local_ff [255];
  
  if (*(int *)(param_5 + 0x1c) != 0) {
    uVar2 = FUN_0049b0e0(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  do {
    do {
      iVar3 = FUN_0049aed0(local_200,0x100,param_5);
      if ((iVar3 == 0) || (iVar3 = FUN_004bd452(local_200,&DAT_0055d734,local_300), iVar3 != 0)) {
        return 0;
      }
      iVar3 = FUN_004bd452(local_200,s_______________0055d7bc,local_300,&local_100);
    } while (iVar3 == 0);
    uVar4 = 0xffffffff;
    pcVar6 = local_300;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar5 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar5 != '\0');
    cVar5 = local_300[~uVar4 - 2];
    while (cVar5 == ' ') {
      iVar3 = -1;
      pcVar6 = local_300;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar5 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar5 != '\0');
      if (iVar3 == -2) break;
      uVar4 = 0xffffffff;
      pcVar6 = local_300;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar5 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar5 != '\0');
      local_300[~uVar4 - 2] = '\0';
      uVar4 = 0xffffffff;
      pcVar6 = local_300;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar5 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar5 != '\0');
      cVar5 = local_300[~uVar4 - 2];
    }
    iVar3 = FUN_004c67c0(local_300,param_1);
    if (iVar3 == 0) {
      pcVar6 = &local_100;
      cVar5 = ' ';
      while ((local_100 == ' ' && (cVar5 != '\0'))) {
        pcVar1 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        cVar5 = *pcVar1;
        local_100 = cVar5;
      }
      if (param_2 != 0) {
        FUN_0049ae90(param_2,pcVar6,param_3);
        FUN_00499d00(param_2);
      }
      if (param_4 != (undefined4 *)0x0) {
        uVar2 = FUN_004bd32f(pcVar6);
        *param_4 = uVar2;
      }
      return 1;
    }
  } while( true );
}

