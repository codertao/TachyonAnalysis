
int FUN_0049a050(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 local_300 [256];
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  uVar4 = *(uint *)(param_2 + 4);
  iVar5 = 0;
  *(uint *)(param_1 + 0x14) = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 8) = uVar2;
  if (*(uint *)(param_1 + 0x10) <= uVar4) {
    return 0;
  }
  iVar3 = Crt_sscanf(uVar2,&DAT_0055d734,local_300);
  do {
    if (iVar3 != 0) {
      return iVar5;
    }
    iVar3 = Crt_sscanf(*(undefined4 *)(param_1 + 8),s________________0055d720,local_100,local_200);
    if (iVar3 == 2) {
      iVar5 = iVar5 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar6 = *(char **)(param_1 + 8);
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    *(char **)(param_1 + 8) = *(char **)(param_1 + 8) + ~uVar4;
    uVar4 = *(int *)(param_1 + 0x14) + 1;
    *(uint *)(param_1 + 0x14) = uVar4;
    if (*(uint *)(param_1 + 0x10) <= uVar4) {
      return iVar5;
    }
    iVar3 = Crt_sscanf(*(undefined4 *)(param_1 + 8),&DAT_0055d734,local_300);
  } while( true );
}

