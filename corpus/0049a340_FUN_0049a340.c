
void FUN_0049a340(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char local_100 [256];
  
  iVar2 = FUN_00499d30(param_1);
  param_1[6] = iVar2;
  if (iVar2 == 0) {
    param_1[0xd] = 0;
    return;
  }
  param_1[5] = 0;
  param_1[2] = *param_1;
  if (param_1[4] != 0) {
    do {
      iVar2 = Crt_sscanf(param_1[2],s____A_Z_0123456789__0055d70c,local_100);
      if (iVar2 != 0) {
        uVar3 = 0xffffffff;
        pcVar4 = local_100;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        param_1[0xd] = param_1[0xd] + ~uVar3;
      }
      uVar3 = 0xffffffff;
      pcVar4 = (char *)param_1[2];
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar2 = param_1[5];
      param_1[2] = (char *)param_1[2] + ~uVar3;
      param_1[5] = iVar2 + 1U;
    } while (iVar2 + 1U < (uint)param_1[4]);
  }
  return;
}

