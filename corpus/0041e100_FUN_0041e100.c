
undefined4 FUN_0041e100(undefined4 param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char local_40 [64];
  
  uVar2 = Cbin_CountEntries(s_COMMON_LINES_005355dc,param_1);
  if (uVar2 == 0) {
    return 0;
  }
  uVar3 = global_bad_shift_rng();
  Cbin_SelectGroup(s_COMMON_LINES_005355dc);
  for (iVar4 = uVar3 % uVar2 + 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    FUN_0049bdb0(param_1,local_40,0x40,0,4,1);
  }
  if (param_2 != (char *)0x0) {
    uVar2 = 0xffffffff;
    pcVar5 = local_40;
    do {
      pcVar6 = pcVar5;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar5 = pcVar6 + -uVar2;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      param_2 = param_2 + 1;
    }
  }
  return 1;
}

