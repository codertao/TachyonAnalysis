
int FUN_00499d30(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 local_100 [256];
  
  iVar4 = 0;
  param_1[5] = 0;
  param_1[2] = *param_1;
  if (param_1[4] == 0) {
    return 0;
  }
  do {
    iVar2 = Crt_sscanf(param_1[2],s____A_Z_0123456789__0055d70c,local_100);
    if (iVar2 != 0) {
      iVar4 = iVar4 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar5 = (char *)param_1[2];
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar2 = param_1[5];
    param_1[2] = (char *)param_1[2] + ~uVar3;
    param_1[5] = iVar2 + 1U;
    if ((uint)param_1[4] <= iVar2 + 1U) {
      return iVar4;
    }
  } while( true );
}

