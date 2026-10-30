
void FUN_0045a4c0(undefined4 param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined1 local_40 [64];
  
  uVar3 = param_2;
  ppuVar5 = &PTR_s_JOYFF_JOLT_00548e60;
  puVar2 = PTR_s_JOYFF_JOLT_00548e60;
  while (puVar2 != (undefined *)0x0) {
    str_sprintf(local_40,*ppuVar5);
    iVar4 = Cbin_GetParam(param_1,local_40,0,0,&param_2,2,1);
    if ((iVar4 != 0) && ((code *)ppuVar5[1] != (code *)0x0)) {
      (*(code *)ppuVar5[1])(uVar3,param_1,local_40,param_2);
    }
    ppuVar1 = ppuVar5 + 2;
    ppuVar5 = ppuVar5 + 2;
    puVar2 = *ppuVar1;
  }
  return;
}

