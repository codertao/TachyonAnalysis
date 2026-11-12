
undefined4
Cbin_FindParam(char *param_1,int param_2,undefined4 param_3,float *param_4,int param_5,int param_6,
              int param_7)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  float fVar5;
  uint uVar6;
  float10 fVar7;
  undefined2 local_304;
  char local_302 [258];
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  local_304 = DAT_0053ebb4;
  local_302[0] = DAT_0053ebb6;
  if (*(int *)(param_7 + 0x1c) != 0) {
    uVar2 = Cbin_ConvertParam(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return uVar2;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = 0.0;
  }
  do {
    do {
      iVar3 = Cbin_NextKey(local_200,0x100,param_7);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = Crt_sscanf(local_200,&DAT_0055d734,local_302 + 2);
      if (iVar3 != 0) {
        return 0;
      }
      iVar3 = Crt_sscanf(local_200,s_______________0055d7bc,local_302 + 2,local_100);
    } while (iVar3 == 0);
    uVar6 = 0xffffffff;
    pcVar4 = local_302 + 2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    cVar1 = local_302[~uVar6];
    for (pcVar4 = local_302 + ~uVar6; (cVar1 == ' ' && (local_302 + 2 < pcVar4));
        pcVar4 = pcVar4 + -1) {
      *pcVar4 = '\0';
      cVar1 = pcVar4[-1];
    }
    if ((local_302[2] == *param_1) && (iVar3 = __stricmp(local_302 + 2,param_1), iVar3 == 0)) {
      iVar3 = _strtok(local_100,&local_304);
      param_6 = param_6 + -1;
      if (0 < param_6) {
        do {
          iVar3 = _strtok(0,&local_304);
          param_6 = param_6 + -1;
        } while (param_6 != 0);
      }
      if (iVar3 == 0) {
        return 0;
      }
      if (param_2 != 0) {
        Cbin_KeyCompare(param_2,iVar3,param_3);
        Str_Length(param_2);
      }
      if (param_4 != (float *)0x0) {
        if (param_5 == 2) {
          fVar7 = (float10)_atof();
          *param_4 = (float)fVar7;
          return 1;
        }
        fVar5 = (float)_atoi(iVar3);
        *param_4 = fVar5;
      }
      return 1;
    }
  } while( true );
}

