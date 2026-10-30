
/* get Nth param of a key (explicit ctx variant) */

undefined4
Cbin_GetParamN_Ctx(undefined4 param_1,int param_2,undefined4 param_3,float *param_4,int param_5,
                  int param_6,int param_7)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  char *pcVar6;
  float10 fVar7;
  undefined2 local_304;
  char local_302 [258];
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  local_304 = DAT_0053ebb4;
  local_302[0] = DAT_0053ebb6;
  if (*(int *)(param_7 + 0x1c) != 0) {
    uVar2 = FUN_0049b520(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return uVar2;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = 0.0;
  }
  iVar3 = FUN_0049af30(local_200,0x100,param_7);
  if (((iVar3 != 0) && (iVar3 = FUN_004bd452(local_200,&DAT_0055d734,local_302 + 2), iVar3 == 0)) &&
     (iVar3 = FUN_004bd452(local_200,s_______________0055d7bc,local_302 + 2,local_100), iVar3 != 0))
  {
    uVar5 = 0xffffffff;
    pcVar6 = local_302 + 2;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    cVar1 = local_302[~uVar5];
    while (cVar1 == ' ') {
      iVar3 = -1;
      pcVar6 = local_302 + 2;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (iVar3 == -2) break;
      uVar5 = 0xffffffff;
      pcVar6 = local_302 + 2;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      local_302[~uVar5] = '\0';
      uVar5 = 0xffffffff;
      pcVar6 = local_302 + 2;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      cVar1 = local_302[~uVar5];
    }
    iVar3 = FUN_004c67c0(local_302 + 2,param_1);
    if (iVar3 == 0) {
      iVar3 = FUN_004bcef7(local_100,&local_304);
      param_6 = param_6 + -1;
      if (0 < param_6) {
        do {
          iVar3 = FUN_004bcef7(0,&local_304);
          param_6 = param_6 + -1;
        } while (param_6 != 0);
      }
      if (iVar3 != 0) {
        if (param_2 != 0) {
          FUN_0049ae90(param_2,iVar3,param_3);
          FUN_00499d00(param_2);
        }
        if (param_4 != (float *)0x0) {
          if (param_5 == 2) {
            fVar7 = (float10)FUN_004bd36f();
            *param_4 = (float)fVar7;
            return 1;
          }
          fVar4 = (float)FUN_004bd32f(iVar3);
          *param_4 = fVar4;
        }
        return 1;
      }
    }
  }
  return 0;
}

