
void FUN_0045a110(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined1 local_40 [64];
  
  puVar4 = param_3;
  puVar3 = param_2;
  *param_3 = param_2;
  ppuVar6 = &PTR_s__s_FLY_00548e88;
  puVar2 = PTR_s__s_FLY_00548e88;
  while (puVar2 != (undefined *)0x0) {
    str_sprintf(local_40,*ppuVar6,*puVar3);
    iVar5 = Cbin_GetParam(param_1,local_40,0,0,&param_2,2,1);
    if ((iVar5 != 0) && ((code *)ppuVar6[1] != (code *)0x0)) {
      (*(code *)ppuVar6[1])(puVar4,param_1,local_40,param_2);
    }
    ppuVar1 = ppuVar6 + 2;
    ppuVar6 = ppuVar6 + 2;
    puVar2 = *ppuVar1;
  }
  return;
}

